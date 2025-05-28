#include "NoCardState.hpp"
#include <iostream>

using namespace std;

// insertCard Method
void NoCardState::insertCard(AtmContext* context) {
    cout << "Card is Inserted" << endl;
    // TODO: Triggers the HasCard State

}

// EjextCard State
void NoCardState::ejectCard(AtmContext* context) {
    cout << "No Card to Eject" << endl;
}

// EnterPin
void NoCardState::enterPin(AtmContext* context, int) {
    cout << "Insert Card First" << endl;
}

// Request Cash
void NoCardState::requestCash(AtmContext* context, int) {
    cout << "Insert card first for Cash Withdrown" << endl;
}