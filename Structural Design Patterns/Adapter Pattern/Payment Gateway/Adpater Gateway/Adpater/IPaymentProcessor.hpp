// Common Payment Gateway Interface
#ifndef IPAYMENT_GATEWAY_HPP
#define IPAYMENT_GATEWAY_HPP

#include <iostream>
using namespace std;

class IPaymentGateway {
    public: 
        virtual ~IPaymentGateway() = default;
        virtual void pay(double amount) = 0;
};

#endif