#ifndef CREDIT_CARD_PAYMENT_HPP
#define CREDIT_CARD_PAYMENT_HPP

#include "IPaymentStrategy.hpp"
#include <iostream>
using namespace std;


class CreditCardPayment : public IPaymentStrategy {
    public : 
        void pay(double amount) override {
            cout << "🔐 Validating credit card..." << endl;
            cout << "💳 Charging ₹" << amount << "to Credit Card..." << endl;
            cout << "✅ Payment successful using Credit Card!" << endl << endl;
        }
};

#endif