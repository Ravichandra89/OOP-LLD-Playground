#ifndef StripeMethod_hpp
#define StripeMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class StripeMethod : public IpaymentGateway {
    public:
        void processPayment(double amount) override {
            cout << "Processing payment of $" << amount << " through Rozarpay." << endl;
        }
};

#endif