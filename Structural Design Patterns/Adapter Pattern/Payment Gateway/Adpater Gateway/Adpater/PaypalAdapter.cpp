#include <iostream>
#include "../thirdparty/PayPalSDK.hpp"
#include "IPaymentProcessor.hpp"

using namespace std;

class PaypalAdapter : public IPaymentGateway {
        PayPal psdk;
    public: 
        void pay(double amount) override {
            psdk.sendPayment(amount);
        }
};


