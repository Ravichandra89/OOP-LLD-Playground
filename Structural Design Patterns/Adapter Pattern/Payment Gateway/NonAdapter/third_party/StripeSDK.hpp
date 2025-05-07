#ifndef STRIPE_SDK_HPP
#define STRIPE_SDK_HPP

#include <iostream>
using namespace std;

class StripeSDK {
    public: 
        void processStripePayment(double doller) {
            cout << "[Stripe] payment of $" << doller << endl;
        }
};

#endif