#include "Payment.hpp"
#include <iostream>
using namespace std;

bool Payment::processPayment(const string & orderId, double amount, const string & method) {
    cout << "[Payment] Processing " << amount << " for " << orderId << " via " << method << "\n";
    return true;
}

bool Payment::refundPayment(const string & orderId) {
    cout << "[Payment] Refunding payment for " << orderId << endl;
    return true;
}