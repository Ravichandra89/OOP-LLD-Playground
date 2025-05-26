#include "Ecommerce_Facade.hpp"
#include <iostream>

using namespace std;

int main() {
    Facade ecommerce;
    try {
        string orderId = ecommerce.purchase("alice", "pass123", "Laptop", 1, 1200.0, "CreditCard");
        ecommerce.trackOrder("valid_token", orderId);
        ecommerce.cancelOrder("valid_token", orderId);
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}