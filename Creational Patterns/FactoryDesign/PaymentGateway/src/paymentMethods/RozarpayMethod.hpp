#ifndef RozarpayMethod_hpp
#define RozarpayMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class RozarpayMethod : public IpaymentGateway {
    public:
        bool processPayment(double amount) override;
};

#endif