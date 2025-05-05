#ifndef COMMISION_DECORATOR_HPP
#define COMMISION_DECORATOR_HPP

#include "OrderCostDecorator.hpp"
#include "../components/IOrderCost.hpp"

class CommisionDecorator : public OrderCostDecorator {
    private: 
        double commisionRate;
    public: 
        CommisionDecorator(IOrderCost* order, double cost);
        double calculateCost() const override;
};

#endif