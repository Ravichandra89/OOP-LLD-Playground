#ifndef IpaymentGateway_hpp
#define IpaymentGateway_hpp

using namespace std;

class IpaymentGateway {
    public:
        virtual ~IpaymentGateway() = default;
        virtual bool processPayment(double amount) = 0;
};

#endif