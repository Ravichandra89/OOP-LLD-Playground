#ifndef NO_CASH_STATE_HPP
#define NO_CASH_STATE_HPp

#include "StateInteface.hpp"

class NoCashState : public StateInterface {
    public: 
        void insertCard(AtmContext* context) override;
        void ejectCard(AtmContext* context) override;
        void enterPin(AtmContext* context, int pin) override;
        void requestCash(AtmContext* context, int amount) override;
};

#endif