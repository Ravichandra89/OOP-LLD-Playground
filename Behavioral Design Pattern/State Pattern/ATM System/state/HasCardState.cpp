#include "HasCardState.hpp"
#include <iostream>

using namespace std;

void HasCardState::insertCard(AtmContext* context) {
    cout << "card already inserted" << endl;
}

void HasCardState::ejectCard(AtmContext* context) {
    cout << "Card Ejected" << endl;
    //TODO: Trigger Card Eject State
}

void HasCardState::enterPin(AtmContext* context, int pin) {
    if (pin == 1234) {
        cout << "PIN Correct" << endl;
        // TODO: Trigger Auth State
    } else {
        cout << "Pin is InCorrect!" << endl;
    }
}

void HasCardState::requestCash(AtmContext* context, int amount) {
    cout << "Enter Pin First" << endl;
}