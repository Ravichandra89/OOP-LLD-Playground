#include "PaymentService.hpp"
#include <iostream>
using namespace std;

bool PaymentService::pay(int orderId, double amount, const string & method) {
    cout << "[PaymentService] Processing payment for order " << orderId
              << ": $" << amount << " via " << method << "\n";
    return true;
}