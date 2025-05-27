#include "PaymentPendingState.hpp"
#include "ReadyState.hpp"
#include "OutofStockState.hpp"
#include "../contexts/VendingMachineContext.hpp"

#include <iostream>
#include <cstdlib>

using namespace std;

void PaymentPendingState::handleRequest(VendingMachineContext & context) {
    cout << "[PaymentPendingState] Payment received. Checking stock..." << endl;

    bool stockAvailable = rand() % 2;
    if (stockAvailable) {
        cout << "[PaymentPendingState] Dispensing product...\n";
        context.setState(new ReadyState());
    } else {
        cout << "[PaymentPendingState] out of stock" << endl;
        context.setState(new OutOfStockState());
    }
}