#ifndef VENDING_MACHINE_PAYMENT_PENDING_STATE_HPP
#define VENDING_MACHINE_PAYMENT_PENDING_STATE_HPP

#include "StateInterface.hpp"

class PaymentPendingState : public StateInterface {
    public: 
        void handleRequest(VendingMachineContext& context) override;
};

#endif
