#ifndef SHIPROCKET_SHIPPING_HPP
#define SHIPROCKET_SHIPPING_HPP

#include "IShipping.hpp"

#include <string>
using namespace std;

class ShipRocket : public IShipping {
    public: 
        void shipOrder(const string & orderId) override;
};

#endif