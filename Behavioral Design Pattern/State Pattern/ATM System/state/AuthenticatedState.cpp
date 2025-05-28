#include "AuthenticatedState.hpp"
#include "NoCardState.hpp"
#include "NoCashState.hpp"

#include <iostream>
using namespace std;

void AuthenticatedState::insertCard(AtmContext* context) {
    cout << "Card already inserted." << endl;
}

void AuthenticatedState::ejectCard(AtmContext* context) {
    cout << "Card Ejected" << endl;
    // TODO: Triggers to NoCardState
    context->setState(new NoCardState());
}

void AuthenticatedState::enterPin(AtmContext*, int) {
    cout << "Already Authenticated" << endl;
}

void AuthenticatedState::requestCash(AtmContext* context, int amount) {
    if (context->getCash() < amount) {
        cout << "Not enough Cash" << endl;
        context->setState(new NoCashState());
    } else {
        int tempCash = context->getCash();
        context->setCash(tempCash - amount);

        cout << "Dispend $" << amount << "Remaning : $" << context->getCash() << endl;
        if (context->getCash() == 0) {
            context->setState(new NoCashState());
        } else {
            context->setState(new NoCardState());
        }
    }
}



