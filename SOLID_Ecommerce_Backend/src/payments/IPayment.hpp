#ifndef IPAYMENT_HPP
#define IPAYMENT_HPP

#include <string>
using namespace std;

class IPayment {
    public: 
        virtual ~IPayment() = default;
        virtual void processPayment(double amount) = 0;
};

#endif