#ifndef VENDING_MACHINE_READY_STATE_HPP
#define VENDING_MACHINE_READY_STATE_HPP

#include "StateInterface.hpp"

class ReadyState : public StateInterface {
    public: 
        void handleRequest(VendingMachineContext& context) override;
};


#endif