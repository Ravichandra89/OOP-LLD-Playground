/***
 * Interface for payment - Amazon Ecommerce Payment System
 */

#ifndef AMAZON_BRIDGE_PATTERN_ABSTRACTION_IPAYMENT_HPP
#define AMAZON_BRIDGE_PATTERN_ABSTRACTION_IPAYMENT_HPP

#include <string>
// Include the PaymentGateway header file
#include "PaymentGateway.hpp"

using namespace std;

namespace abstraction
{

    class IPayment
    {
    protected:
        unique_ptr<PaymentGateway> gateway_;

    public:
        virtual ~IPayment() = default;
        explicit IPayment(unique_ptr<PaymentGateway> gateway);

        // Non Copyable
        IPayment(const IPayment &) = delete;
        IPayment &operator=(const IPayment &) = delete;

        // Non Movable
        IPayment(IPayment &&) noexcept = default;
        IPayment &operator=(IPayment &&) noexcept = default;

        // Payment Pay method
        virtual void pay(double amount) = 0;
    };
}

#endif