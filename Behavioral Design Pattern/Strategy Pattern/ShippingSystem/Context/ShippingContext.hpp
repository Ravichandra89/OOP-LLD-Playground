#ifndef SHIPPING_CONTEXT_SYSTEM_HPP
#define SHIPPING_CONTEXT_SYSTEM_HPP

#include "../Strategy/IShippingInterface.hpp"
#include <iostream>
#include <memory>

using namespace std;

class ShippingContext {
        unique_ptr<IShippingInterface> strategy;

    public : 
        explicit ShippingContext(unique_ptr<IShippingInterface> initialStrategy);
        void setStrategy(unique_ptr<IShippingInterface> strategy);
        double calculate(const Order & order) const;
        string currentStrategyName() const;
};

#endif