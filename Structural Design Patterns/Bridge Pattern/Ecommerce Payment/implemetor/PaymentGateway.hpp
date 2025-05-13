#ifndef PAYMENT_GATEWAY_HPP
#define PAYMENT_GATEWAY_HPP

class PaymentGateway {
    public: 
        virtual ~PaymentGateway() = default;
        virtual void transfer(double amount) = 0;
};

#endif