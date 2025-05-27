#include <iostream>
#include "contexts/VendingMachineContext.hpp"
#include "states/ReadyState.hpp"

using namespace std;

int main() {
    VendingMachineContext vending(new ReadyState());

    cout << "Starting Vending Machine Simulation..." << endl;

    for (int i=0; i<5; i++) {
        cout << "Cycle " << (i + 1) << ":\n";
        vending.request();
        cout << "----------------------------------\n";
    }
    
    return 0;
}