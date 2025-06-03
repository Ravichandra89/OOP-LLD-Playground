#include "ShippingContext.hpp"
#include <iostream>
#include <memory>

using namespace std;

ShippingContext::ShippingContext(unique_ptr<IShippingInterface> newStrategy) : strategy(newStrategy){};

void ShippingContext::setStrategy(unique_ptr<IShippingInterface> newStrategy) {
    strategy = move(newStrategy);
}

double ShippingContext::calculate(const Order& order) const {
    if (strategy) {
        return strategy->calculateCost(order);
    }

    cout << "No Shipping strategy set!" << endl;
    return 0.0;
}

string ShippingContext::currentStrategyName() const {
    if (strategy) {
        strategy->getName();
    }

    cout << "No Strategy Choosen" << endl;
}
