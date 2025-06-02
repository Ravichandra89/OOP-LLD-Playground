#ifndef ISHIPPING_INTERFACE_HPP
#define ISHIPPING_INTERFACE_HPP

#include <string>
using namespace std;

struct Order {
        double weight;
        double distance;
        bool fragile;
};

class IShippingInterface {
    public : 
        virtual double calculateCost(const Order& order) = 0;
        virtual string getName() const = 0;
        virtual ~IShippingInterface() = default;
};

#endif