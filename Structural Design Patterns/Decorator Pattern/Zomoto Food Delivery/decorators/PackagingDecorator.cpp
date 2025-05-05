#include "PackagingDecorator.hpp"
#include <iostream>

// Constructor with function
PackagingDecorator::PackagingDecorator(IOrderCost * order, double cost) : OrderCostDecorator(order), packagingCost(cost){};

// Method
double PackagingDecorator::calculateCost() const {
    return order->calculateCost() + packagingCost;
}