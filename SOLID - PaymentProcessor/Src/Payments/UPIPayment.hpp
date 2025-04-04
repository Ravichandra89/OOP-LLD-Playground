#ifndef UPI_PAYMENT_HPP
#define UPI_PAYMENT_HPP

#include "IPaymentMethod.hpp"

class UPIPayment : public IPaymentMethod
{
public:
    void processPayment(double amount) override;
};

#endif