#include <iostream>
#include "CreditPayment.hpp"
#include "IPaymentMethod.hpp"

using namespace std;

void CreditPayment::processPayment(double amount)
{
    cout << "Processing credit payment of $" << amount << endl;
}
