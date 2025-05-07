#ifndef PAYPAL_SDK_HPP
#define PAYPAL_SDK_HPP

#include <iostream>
using namespace std;


class PayPal {
    public: 
        void sendPayment(double amount) {
            cout  << "Sending Payment Amount of : $" << amount << "Throught Paypal!" << endl;
        }
};

#endif