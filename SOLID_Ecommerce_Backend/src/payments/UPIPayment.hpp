#ifndef UPI_PAYMENT_HPP
#define UPI_PAYMENT_HPP

#include "IPayment.hpp"

class UPIPayment : public IPayment {
    public: 
        void processPayment(double amount) override;
};

#endif