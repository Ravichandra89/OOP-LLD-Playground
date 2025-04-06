#ifndef PAYMENTPROCESSOR_HPP
#define PAYMENTPROCESSOR_HPP

#include "Payments/IPaymentMethod.hpp"
#include "Discounts/IDiscount.hpp"
#include "logger/ILogger.hpp"

class PaymentProcessor
{
    IPaymentMethod *py;
    IDiscount *ds;
    ILogger *lg;

public:
    PaymentProcessor(IPaymentMethod *method, IDiscount *discount, ILogger *logger);
    void processPayment(double amount);
};

#endif