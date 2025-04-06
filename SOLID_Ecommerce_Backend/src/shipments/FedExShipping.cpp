#include <iostream>
#include "FedExShipping.hpp"

using namespace std;

void FedExShipping::shipOrder(const string &orderId) {
    cout << "Shipping order with FedEx. Order ID: " << orderId << endl;
    cout << "FedEx shipping processed successfully!" << endl;
};
