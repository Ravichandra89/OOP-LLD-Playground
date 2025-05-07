#ifndef RAZORPAY_SDK_HPP
#define RAZORPAY_SDK_HPP

#include <iostream>
using namespace std;

class RazorpaySDK {
    public: 
        void makePayment(double amount) {
            cout << "[Razorpay] sending payment of amount $" << amount << endl;
        }
};

#endif