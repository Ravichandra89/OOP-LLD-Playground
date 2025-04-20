#ifndef PaypalMethod_hpp
#define PaypalMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class PaypalMethod : public IpaymentGateway {
    public:
        void processPayment(double amount) override {
            cout << "Processing payment of $" << amount << " through PayPal." << endl;

        }
};

#endif
