#ifndef FEDEX_SHIPPING_HPP
#define FEDEX_SHIPPING_HPP

#include "IShipping.hpp"

#include <string>
using namespace std;

class FedExShipping : public IShipping {
    public: 
        void shipOrder(const string & orderId) override;
};

#endif