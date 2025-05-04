// All Decorators Interface

#ifndef ORDER_COST_DECORATOR
#define ORDER_COST_DECORATOR

#include "../components/IOrderCost.hpp"

class OrderCostDecorator : public IOrderCost {
    protected: 
        IOrderCost * order;
    public: 
        // Constructor for Order pointer
        OrderCostDecorator(IOrderCost * order);
        virtual ~OrderCostDecorator();
};

#endif
