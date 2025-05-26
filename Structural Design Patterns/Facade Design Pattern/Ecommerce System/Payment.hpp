/***
 * 
 * Payment Processor For Ecommerce System - another sub system
 *  - processPayment(...)
 *  - refundPayment(...)
 */

#ifndef PAYMENT_SYSTEM_HPP
#define PAYMENT_SYSTEM_HPP

#include <string>
using namespace std;

class Payment {
    public: 
        Payment() = default;
        bool processPayment(const string & orderId, double amount, const string & method);
        bool refundPayment(const string & orderId);
};

#endif