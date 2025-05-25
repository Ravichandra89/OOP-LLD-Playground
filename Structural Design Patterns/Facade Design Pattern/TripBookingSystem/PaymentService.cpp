#include "PaymentService.hpp"
#include <iostream>
using namespace std;

void PaymentService::authorizePayment(double amount) {
    cout << "Authorizing payment of: $" << amount << endl;
}
void PaymentService::capturePayment(double amount) {
    cout << "Capturing payment of: $" << amount << endl;
}
void PaymentService::refundPayment(double amount) {
    cout << "Refunding payment of: $" << amount << endl;
}