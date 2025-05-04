#ifndef SERVICE_FEES_DECORATOR
#define SERVICE_FEES_DECORATOR

#include "../components/IOrderCost.hpp"
#include "OrderCostDecorator.hpp"

class ServiceFeesDecorator : OrderCostDecorator {
    private: 
        double serviceCharges;
    public: 
        ServiceFeesDecorator(IOrderCost* order, double cost);
        double calculateCost() const override;
};

#endif