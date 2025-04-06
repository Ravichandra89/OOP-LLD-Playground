#ifndef PAYPAL_PAYMENT_HPP
#define PAYPAL_PAYMENT_HPP

#include "IPayment.hpp"
#include <string>
using namespace std;

class PaypalPayment : public IPayment {
    public: 
        void processPayment(double amount) override;
};

#endif