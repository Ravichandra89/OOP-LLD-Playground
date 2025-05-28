#ifndef ATM_MACHINE_STATE_PATTERN_CONTEXT_HPP
#define ATM_MACHINE_STATE_PATTERN_CONTEXT_HPP

#include "../state/StateInteface.hpp"

class AtmContext {
        StateInterface * state;
        int cash;
    
    public: 
        // Constructor - Constructor for Context
        AtmContext(int initialCash);
        void setState(StateInterface* currentState);
        StateInterface* getState() const;
        int getCash() const;
        void setCash(int amount);

        void insertCard();
        void ejectCard();
        void enterPin(int pin);
        void requestCash(int amount);
};


#endif