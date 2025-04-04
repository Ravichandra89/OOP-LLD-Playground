#ifndef PAYPAL_PAYMENT_HPP
#define PAYPAL_PAYMENT_HPP

#include "IPaymentMethod.hpp"

class PaypalPayment : public IPaymentMethod {
    public: 
        void processPayment(double amount) override;
};

#endif