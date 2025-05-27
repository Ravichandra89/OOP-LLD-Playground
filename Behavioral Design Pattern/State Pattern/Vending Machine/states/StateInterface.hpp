#ifndef VENDING_MACHINE_STATE_INTERFACE_HPP
#define VENDING_MACHINE_STATE_INTERFACE_HPP

#include <string>

class VendingMachineContext;

class StateInterface {
    public: 
        virtual void handleRequest(VendingMachineContext& context) = 0;
        virtual ~StateInterface() = default;
};


#endif