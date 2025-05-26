#include "Inventory.hpp"
#include <iostream>

using namespace std;


bool Inventory::checkStock(const string& productId, int quantity) {
    cout << "[Inventory] Checking stock for " << quantity << " of " << productId << endl;
    return true;
}

void Inventory::updateStock(const string& productId, int quantity) {
    cout << "[Inventory] Updating stock for " << productId << " by " << quantity << endl;
}