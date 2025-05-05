#ifndef BASE_ORDER_COST
#define BASE_ORDER_COST

#include "IOrderCost.hpp"

class BaseOrderCost : public IOrderCost
{
    double baseCost;

public:
    // Constructor For cost Initilization
    BaseOrderCost(double cost);
    double calculateCost() const override;
};

#endif