#include "IPaymentProcessor.hpp"
#include "../thirdparty/RazorpaySDK.hpp"
#include <iostream>
using namespace std;

// Class for Razorpay Adapter
class RazorpayAdapter : public IPaymentGateway {
        RazorpaySDK rsdk;

    public: 
        void pay(double amount) override {
            rsdk.makePayment(amount);
        };
};
