#ifndef STRIPE_SDK_HPP
#define STRIPE_SDK_HPP

#include <iostream>
using namespace std;

class StripeSDK {
    public: 
        void processStripePayment(double amount) {
            cout << "[Stripe] processing Payment of Amount $" << amount << endl;
        }
};

#endif