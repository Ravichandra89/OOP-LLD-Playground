#include "OrderCostDecorator.hpp"
#include <iostream>

// Constructor 
OrderCostDecorator::OrderCostDecorator(IOrderCost * order) : order(order){};

OrderCostDecorator::~OrderCostDecorator() {
    delete order;
};