#include "ProductSelectedState.hpp"
#include "PaymentPendingState.hpp"
#include "../contexts/VendingMachineContext.hpp"

#include <iostream>
using namespace std;

// Definition of the handleRequest method for the ProductSelectedState class
void ProductSelectedState::handleRequest(VendingMachineContext& context) {
    cout << "[Product Selected State] A product has been selected." << endl;

    // TODO: Trigger the Payment State
    context.setState(new PaymentPendingState());
}