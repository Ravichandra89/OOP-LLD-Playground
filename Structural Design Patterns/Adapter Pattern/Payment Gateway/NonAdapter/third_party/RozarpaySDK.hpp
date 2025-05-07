#ifndef ROZARPAY_SDK_HPP
#define ROZARPAY_SDK_HPP

#include <iostream>
using namespace std;

class RozarpaySDK {
    public: 
        void makePayment(double amount) {
            cout << "[RozarPay] payment of amount $" << amount << endl;
        }
};

#endif