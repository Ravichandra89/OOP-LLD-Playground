#ifndef EXPEDITED_SHIPPING_SYSTEM_HPP
#define EXPEDITED_SHIPPING_SYSTEM_HPP

#include "IShippingInterface.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ExpeditedShipping : public IShippingInterface {
    public : 
        double calculateCost(const Order & order) override {
            double baseRate = 10.0;
            double weightCharge = 3.0 * order.weight;
            double distanceCharge = 1.0 * order.distance;
            double fragileFee = order.fragile ? 0.5 : 0.0;

            return baseRate + weightCharge + distanceCharge + fragileFee;
        }

        string getName() const override {
            return "Expedited Shipping Delivery";
        }
};

#endif