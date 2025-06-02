#ifndef UPI_PAYMENT_HPP
#define UPI_PAYMENT_HPP

#include "IPaymentStrategy.hpp"
#include <iostream>
using namespace std;

class UpiPayment : public IPaymentStrategy {
    public : 
        void pay(double amount) override {
            cout << "📱 Initiating UPI transfer request to VPA..." << endl;
            cout << "⏳ Awaiting UPI PIN verification..." << endl;
            cout << "✅ ₹" << amount << "paied successfully via UPI" << endl << endl;
        }
};


#endif