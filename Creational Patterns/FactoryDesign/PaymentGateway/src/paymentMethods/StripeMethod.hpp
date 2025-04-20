#ifndef StripeMethod_hpp
#define StripeMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class StripeMethod : public IpaymentGateway {
    public:
        bool processPayment(double amount) override;
};

#endif