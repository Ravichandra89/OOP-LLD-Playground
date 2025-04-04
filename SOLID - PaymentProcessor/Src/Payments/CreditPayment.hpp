#ifndef CREDIT_PAYMENT_HPP
#define CREDIT_PAYMENT_HPP

#include "IPaymentMethod.hpp"

class CreditPayment : public IPaymentMethod
{
public:
    void processPayment(double amount) override;
};

#endif