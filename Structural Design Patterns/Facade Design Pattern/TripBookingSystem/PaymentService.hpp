/***
 * Payment Service Sub System - 
 * authorizePayment(...)
 * capturePayment(...)
 * refundPayment(...)
 */

#ifndef PAYMENT_SERVICE_HPP
#define PAYMENT_SERVICE_HPP

class PaymentService {
public:
    void authorizePayment(double amount);
    void capturePayment(double amount);
    void refundPayment(double amount);
};

#endif