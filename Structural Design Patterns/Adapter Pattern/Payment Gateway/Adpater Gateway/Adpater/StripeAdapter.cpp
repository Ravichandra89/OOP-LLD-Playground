#include "IPaymentProcessor.hpp"
#include "../thirdparty/StripeSDK.hpp"
#include <iostream>

using namespace std;

class StripeAdapter : public IPaymentGateway {
        StripeSDK sdk;
    public: 
        void pay(double amount) override {
            sdk.processStripePayment(amount);
        }
};