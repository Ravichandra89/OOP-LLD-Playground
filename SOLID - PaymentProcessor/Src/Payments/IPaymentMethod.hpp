#ifndef IPAYMENT_METHOD_HPP
#define IPAYMENT_METHOD_HPP

#include <string>

class IPaymentMethod {
    public: 
        virtual void processPayment(double amount) = 0;
        virtual ~IPaymentMethod() = default;
};

#endif