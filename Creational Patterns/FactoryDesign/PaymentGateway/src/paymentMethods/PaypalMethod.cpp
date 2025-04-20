#include <iostream>
#include "PaypalMethod.hpp"

using namespace std;

bool PaypalMethod::processPayment(double amount)
{
    cout << "Processing payment of $" << amount << " through PayPal." << endl;
    return true;
}