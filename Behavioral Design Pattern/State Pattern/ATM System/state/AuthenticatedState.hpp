#ifndef AUTHENTICATED_STATE_HPP
#define AUTHENTICATED_STATE_HPP

#include "StateInteface.hpp"

class AuthenticatedState : public StateInterface {
    public: 
        void insertCard(AtmContext* context) override;
        void ejectCard(AtmContext* context) override;
        void enterPin(AtmContext* context, int pin) override;
        void requestCash(AtmContext* context, int amount) override;
};

#endif