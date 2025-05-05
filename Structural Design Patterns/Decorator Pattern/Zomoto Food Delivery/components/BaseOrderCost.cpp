#include <iostream>
#include "BaseOrderCost.hpp"

// Constructor
BaseOrderCost::BaseOrderCost(double cost) : baseCost(cost) {};

// Method
double BaseOrderCost::calculateCost() const
{
    return baseCost;
};
