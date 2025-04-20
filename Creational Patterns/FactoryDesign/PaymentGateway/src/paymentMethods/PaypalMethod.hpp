#ifndef PaypalMethod_hpp
#define PaypalMethod_hpp

#include "../Interface/IpaymentGateway.hpp"
#include <iostream>
using namespace std;

class PaypalMethod : public IpaymentGateway {
    public:
        bool processPayment(double amount) override;
};

#endif
