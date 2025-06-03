#ifndef INTERNATIONAL_SHIPPING_SYSTEM_HPP
#define INTERNATIONAL_SHIPPING_SYSTEM_HPP

#include "IShippingInterface.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class InternationalShipping : public IShippingInterface {
    public :
        double calculateCost(const Order& order) override {
            double baseRate = 25.0;
            double weightCharge = 5.0 * order.weight;
            double distanceCharge = 2.0 * order.distance;
            double fragileCharge = order.fragile ? 15.0 : 20.0;

            return baseRate + weightCharge + distanceCharge + fragileCharge;
        }

        string getName() const override {
            return "International Shipping System";
        }
};

#endif