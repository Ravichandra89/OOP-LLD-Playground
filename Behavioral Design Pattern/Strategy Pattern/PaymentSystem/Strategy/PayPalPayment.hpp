#ifndef PAY_PAL_PAYMENT_HPP
#define PAY_PAL_PAYMENT_HPP

#include "IPaymentStrategy.hpp"
#include <iostream>
using namespace std;

class PayPalPayment : public IPaymentStrategy {
    public : 
        void pay(double amount) override {
            cout << "📧 Connecting to PayPal with user email..." << endl;
            cout << "🔄 Processing transaction of ₹" << amount << " through PayPal..." << endl;
            cout << "✅ Payment successful via PayPal!" << endl << endl;
        }
};

#endif