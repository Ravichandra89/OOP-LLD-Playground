#include <iostream>

#include "Strategy/StandardShipping.hpp"
#include "Strategy/ExpeditedShipping.hpp"
#include "Strategy/InternationalShipping.hpp"

#include "Context/ShippingContext.hpp"

using namespace std;

int main() {
    Order order1 {
        3.5,
        120.0,
        false
    };

    Order order2 {
        1.2,
        20.0,
        true
    };

    // StandardShipping 
    ShippingContext shipping(make_unique<StandardShipping>());
    cout << "Using strategy: " << shipping.currentStrategyName() << endl;
    cout << "Order 1 cost: $ " << shipping.calculate(order1) << endl;
    cout << "Order 2 cost: $ " << shipping.calculate(order2) << endl;
    
    // Set the Strategy to Expedited
    shipping.setStrategy(unique_ptr<ExpeditedShipping>());
    cout << "Using strategy: " << shipping.currentStrategyName() << endl;
    cout << "Order 1 cost: $ " << shipping.calculate(order1) << endl;
    cout << "Order 2 cost: $ " << shipping.calculate(order2) << endl;

    // Set the strategy to International
    shipping.setStrategy(unique_ptr<InternationalShipping>());
    cout << "Using Strategy: " << shipping.currentStrategyName() << endl;
    cout << "Order 1 cost: $ " << shipping.calculate(order1) << endl;
    cout << "Order 2 cost: $ " << shipping.calculate(order2) << endl;
    
    return 0;
}