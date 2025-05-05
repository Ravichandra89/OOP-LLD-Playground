#include <iostream>
#include "components/BaseOrderCost.hpp"
#include "decorators/DeliveryChargesDecorator.hpp"
#include "decorators/CommisionDecorator.hpp"
#include "decorators/DiscountDecorator.hpp"
#include "decorators/PackagingDecorator.hpp"
#include "decorators/ServiceFeesDecorator.hpp"

using namespace std;

int main() {
    // Base food cost
    IOrderCost * order = new BaseOrderCost(200);
    order = new PackagingDecorator(order, 20);
    order = new CommisionDecorator(order, 0.10);
    order = new DeliveryChargesDecorator(order, 20);
    order = new DiscountDecorator(order, 10);
    order = new ServiceFeesDecorator(order, 20);

    cout << "Total Order Cost. Rs" << order->calculateCost() << endl;
    delete order;

    return 0;
}