#ifndef STATE_INTERFACE_HPP
#define STATE_INTERFACE_HPP

class AtmContext;

class StateInterface {
    public : 
        virtual void insertCard(AtmContext * context) = 0;
        virtual void ejectCard(AtmContext * context) = 0;
        virtual void enterPin(AtmContext * context, int pin) = 0;
        virtual void requestCash(AtmContext * context, int amount) = 0;

        // Destructor for State Interface
        virtual ~StateInterface() {};

};

#endif