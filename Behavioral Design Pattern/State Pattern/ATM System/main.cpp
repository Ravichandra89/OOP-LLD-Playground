#include <iostream>
#include "contexts/ATMContext.hpp"

int main() {
    AtmContext atm(10000);

    atm.insertCard();
    atm.enterPin(1234);
    atm.requestCash(300);

    atm.insertCard();
    atm.enterPin(1234);
    atm.requestCash(400);

    atm.ejectCard();
    return 0;
}