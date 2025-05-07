#ifndef PAYMENT_SERVICE_HPP
#define PAYMENT_SERVICE_HPP

#include "../third_party/PayPalSDK.hpp"
#include "../third_party/RozarpaySDK.hpp"
#include "../third_party/StripeSDK.hpp"
#include <iostream>
#include <string>
using namespace std;

class PaymentService {
    public: 
        void pay(const string & type, double amount) {
            if (type == "Razorpay") {
                RozarpaySDK  rsdk;
                rsdk.makePayment(amount);
            } else if (type == "Stripe") {
                StripeSDK ssdk;
                ssdk.processStripePayment(amount);
            } else if (type == "Paypal") {
                PayPal psdk;
                psdk.sendPayment(amount);
            } else {
                cout << "Unsupported Payment Gateway " << type << endl;
            }
        }
};

#endif