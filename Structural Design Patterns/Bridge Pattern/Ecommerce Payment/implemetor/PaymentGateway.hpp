/**
 * Payment Gayeway Interface for all payment gateways like PayPal, Stripe, Razorpay, etc...
 */
#ifndef AMAZON_BRIDGE_PATTERN_IMPLEMENTOR_PAYMENTGATEWAY_HPP
#define AMAZON_BRIDGE_PATTERN_IMPLEMENTOR_PAYMENTGATEWAY_HPP

class PaymentGateway {
    public: 
        virtual void Transfer(double amount) = 0;
        virtual ~PaymentGateway() = default;
};

#endif