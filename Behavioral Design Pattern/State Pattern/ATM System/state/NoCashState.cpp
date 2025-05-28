#include "NoCashState.hpp"
#include <iostream>

using namespace std;

void NoCashState::insertCard(AtmContext* context) {
    cout << "Atm out of cash " << endl;
}

void NoCashState::ejectCard(AtmContext* context) {
    cout << "No Card to eject" << endl;
}

void NoCashState::enterPin(AtmContext* context, int ) {
    cout << "Atm out of cash!" << endl;
}

void NoCashState::requestCash(AtmContext*, int) {
    cout << "Atm has no cash" << endl;
}