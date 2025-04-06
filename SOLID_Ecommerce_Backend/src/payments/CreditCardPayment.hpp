#ifndef CREDIT_CARD_PAYMENT_HPP
#define CREDIT_CARD_PAYMENT_HPP

#include "IPayment.hpp"

class CreditCardPayement : public IPayment {
    public: 
        void processPayment(double amount) override;
};

#endif