#include <iostream>
#include "UPIPayment.hpp"
#include "IPaymentMethod.hpp"

using namespace std;

void UPIPayment::processPayment(double amount)
{
    cout << "Processing crypto payment of $" << amount << endl;
}