#ifndef NO_CARD_STATE_HPP
#define NO_CARD_STATE_HPP

#include "StateInteface.hpp"

class NoCardState : public StateInterface {
    public: 
        void insertCard(AtmContext * context) override;
        void ejectCard(AtmContext * context) override;
        void enterPin(AtmContext* context, int pin) override;
        void requestCash(AtmContext* context, int amount) override;
};


#endif