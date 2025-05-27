#ifndef VENDING_MACHINE_CONTEXT_HPP
#define VENDING_MACHINE_CONTEXT_HPP

#include "../states/StateInterface.hpp"

class VendingMachineContext {
        StateInterface * currentState;

    public: 
        // Constructor 
        VendingMachineContext(StateInterface* initial) : currentState(initial) {};

        // Method to set the current state
        void setState(StateInterface* newState) {
            if (currentState) delete currentState; // Clean up the old state
            currentState = newState;
        }

        void request() {
            currentState->handleRequest(*this);
        }

        ~VendingMachineContext() {
            delete currentState;
        }

};


#endif