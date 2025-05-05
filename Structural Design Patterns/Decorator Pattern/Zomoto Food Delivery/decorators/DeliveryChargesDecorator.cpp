#include "DeliveryChargesDecorator.hpp"
#include "../components/IOrderCost.hpp"
#include <iostream>

using namespace std;

// Constructor
DeliveryChargesDecorator::DeliveryChargesDecorator(IOrderCost* order, double cost) : OrderCostDecorator(order), deliveryCharges(cost) {};

// Method
double DeliveryChargesDecorator::calculateCost() const {
    return order->calculateCost() + deliveryCharges;
}