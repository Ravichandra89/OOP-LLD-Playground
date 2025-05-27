#include "OutofStockState.hpp"
#include <iostream>

using namespace std;

// Definition of the handleRequest method for the OutOfStockState class
void OutOfStockState::handleRequest(VendingMachineContext& context) {
    cout << "[Out of Stock State] The selected product is out of stock." << endl;

    // TODO: Notify the user and possibly return to the ReadyState
}