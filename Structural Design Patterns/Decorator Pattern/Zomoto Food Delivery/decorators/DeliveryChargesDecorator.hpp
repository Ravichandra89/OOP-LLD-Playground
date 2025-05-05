#ifndef DELIVERY_CHARGES_DECORATOR
#define DELIVERY_CHARGES_DECORATOR

#include "OrderCostDecorator.hpp"
#include "../components/IOrderCost.hpp" 

class DeliveryChargesDecorator : public OrderCostDecorator {
    private: 
        double deliveryCharges;
    public: 
        DeliveryChargesDecorator(IOrderCost* order, double cost);
        double calculateCost() const override;
};

#endif