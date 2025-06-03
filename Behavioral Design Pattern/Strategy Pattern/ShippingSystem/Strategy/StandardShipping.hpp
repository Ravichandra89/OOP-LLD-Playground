#ifndef STANDARD_SHIPPING_SYSTEM_HPP
#define STANDARD_SHIPPING_SYSTEM_HPP

#include "IShippingInterface.hpp"
#include <string>
#include <iostream>
using namespace std;

class StandardShipping : public IShippingInterface {
    public : 
        double calculateCost(const Order& order) override  {
            double baseRate = 5.0;
            double weightCharge = 2.0 * order.weight;
            double distanceCharge = 0.5 * order.distance;
            
            return baseRate + weightCharge + distanceCharge;
        }

        string getName() const override {
            return "Standard Shipping";
        }
};

#endif