#include "DiscountDecorator.hpp"
#include <iostream>
using namespace std;

// Constructor
DiscountDecorator::DiscountDecorator(IOrderCost* order, double discount) : OrderCostDecorator(order), discount(discount) {};

// Method
double DiscountDecorator::calculateCost() const {
    return order->calculateCost() - discount;
}