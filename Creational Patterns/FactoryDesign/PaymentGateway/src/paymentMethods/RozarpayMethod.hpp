#ifndef RozarpayMethod_hpp
#define RozarpayMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class RozarpayMethod : public IpaymentGateway {
    public:
        void processPayment(double amount) override {
            cout << "Processing payment of $" << amount << " through Rozarpay." << endl;
        }
};

#endif