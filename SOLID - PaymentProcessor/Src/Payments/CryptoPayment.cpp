#include <iostream>
#include "CryptoPayment.hpp"
#include "IPaymentMethod.hpp"

using namespace std;

void CryptoPayment::processPayment(double amount) {
    cout << "Processing crypto payment of $" << amount << endl;
}