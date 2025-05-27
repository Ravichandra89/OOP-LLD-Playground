#include "ReadyState.hpp"
#include "ProductSelectedState.hpp"
#include "../contexts/VendingMachineContext.hpp"

#include <iostream>
using namespace std;

// Definition of the handleRequest method for the ReadyState class

void ReadyState::handleRequest(VendingMachineContext& context) {
    cout << "[Ready State] The vending machine is ready to accept a request." << endl;

    // TODO: Trigger the ProductSelectionState
    context.setState(new ProductSelectedState());
}