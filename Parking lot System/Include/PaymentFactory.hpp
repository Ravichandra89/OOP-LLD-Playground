#ifndef PAYMENT_PROCESSOR_FACTORY_HPP
#define PAYMENT_PROCESSOR_FACTORY_HPP

#include "PaymentProcessor.hpp"
#include <memory>

class PaymentProcessorFactory {
    public : 
        unique_ptr<IPaymentProcessor> createPayment(PaymentMethodType type) {
            switch (type) {
                case PaymentMethodType::CREDIT_CARD:
                    return make_unique<CreditCardProcessor>();
                    break;
                
                // Cash PaymentMethod
                case PaymentMethodType::CASH:
                    return make_unique<CashProcessor>();
                    break;
                
                // Rozarpay PaymentMethod
                case PaymentMethodType::ROZARPAY:
                    return make_unique<RozarpayProcessor>();
                    break;

                default: 
                    return nullptr;
                    break;
            }
        }
};

#endif