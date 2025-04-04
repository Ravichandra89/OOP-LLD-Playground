#ifndef CRYPTO_PAYMENT_HPP
#define CRYPTO_PAYMENT_HPP

#include "IPaymentMethod.hpp"

class CryptoPayment : public IPaymentMethod {
    public: 
        void processPayment(double amount) override;
};

#endif