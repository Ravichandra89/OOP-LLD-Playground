#include <iostream>
#include "ServiceFeesDecorator.hpp"

using namespace std;

// Constructor
ServiceFeesDecorator::ServiceFeesDecorator(IOrderCost * order, double cost) : OrderCostDecorator(order), serviceCharges(cost){};

double ServiceFeesDecorator::calculateCost() const {
    return order->calculateCost() + serviceCharges;
}

