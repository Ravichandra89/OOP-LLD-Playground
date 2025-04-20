#include <iostream>
#include "./PaypalPayment.hpp"

using namespace std;

void PaypalPayment::processPayment(double amount) {
    cout << "Processing payment of $" << amount << " via PayPal..." << endl;
}
