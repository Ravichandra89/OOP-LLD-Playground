#include "CommisionDecorator.hpp"
#include "OrderCostDecorator.hpp"
#include "../components/IOrderCost.hpp"

CommisionDecorator::CommisionDecorator(IOrderCost* order, double rate) : OrderCostDecorator(order), commisionRate(rate){};

// method definition
double CommisionDecorator::calculateCost() const {
    return order->calculateCost() * (1 + commisionRate);
}