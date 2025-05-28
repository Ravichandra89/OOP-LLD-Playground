#include "ATMContext.hpp"
#include "../state/StateInteface.hpp"
#include <iostream>

// Constructor Definition 

// setState Method

void AtmContext::setState(StateInterface* currentState) {
    // Clean up the state first
    if (currentState) delete currentState;
    state = currentState;
}

// getState Method
StateInterface* AtmContext::getState() const {
    return state;
}

// get Cash Method
int AtmContext::getCash() const {
    return cash;
}

// setCash Method
void AtmContext::setCash(int amount) {
    cash = amount;
}

// Insert Card Method Definition
void AtmContext::insertCard() {
    state->insertCard(this);
}

// ejectCard Method Definition
void AtmContext::ejectCard() {
    state->ejectCard(this);
}

// Enter Pin Method
void AtmContext::enterPin(int pin) {
    state->enterPin(this, pin);
}

void AtmContext::requestCash(int amount) {
    state->requestCash(this, amount);
}