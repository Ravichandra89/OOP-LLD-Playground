#ifndef IPAYMENT_STRATEGY_HPP
#define IPAYMENT_STRATEGY_HPP

class IPaymentStrategy {
    public : 
        virtual void pay(double amount) = 0;
        virtual ~IPaymentStrategy() = default;
};

#endif