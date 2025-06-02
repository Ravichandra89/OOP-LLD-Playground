#ifndef PAYMENT_CONTEXT_HPP
#define PAYMENT_CONTEXT_HPP

#include "../Strategy/IPaymentStrategy.hpp"
#include <iostream>
using namespace std;

class PaymentContext {
        IPaymentStrategy * strategy;
    
    public: 
        // Constructor
        PaymentContext(IPaymentStrategy * strategy) : strategy(strategy) {};

        void setStrategy(IPaymentStrategy* newStrategy) {
            strategy = newStrategy;
        }

        void processPayment(double amount) {
            if (strategy) {
                strategy->pay(amount);
            } else {
                cout << "❌ Payment strategy not set!" << endl;
            }
        }
};

#endif