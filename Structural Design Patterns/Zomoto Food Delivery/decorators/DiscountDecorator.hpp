#ifndef DISCOUNT_DECORATOR_HPP
#define DISCOUNT_DECORATOR_HPP

#include "OrderCostDecorator.hpp"

class DiscountDecorator : public OrderCostDecorator {
    private: 
        double discount;
    public: 
        DiscountDecorator(IOrderCost* order, double discount);
        double calculateCost() const override;
};

#endif