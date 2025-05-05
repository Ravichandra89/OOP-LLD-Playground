#ifndef PACKAGING_DECORATOR_HPP
#define PACKAGING_DECORATOR_HPP

#include "../components/IOrderCost.hpp"
#include "OrderCostDecorator.hpp"

class PackagingDecorator : public OrderCostDecorator {
    private: 
        double packagingCost;
    public: 
        PackagingDecorator(IOrderCost *order, double cost);
        double calculateCost() const override;

};

#endif