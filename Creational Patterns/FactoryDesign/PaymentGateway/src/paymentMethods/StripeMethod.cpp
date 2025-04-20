#include "StripeMethod.hpp"
#include <iostream>
using namespace std;

bool StripeMethod::processPayment(double amount)
{
    cout << "Processing payment of $" << amount << " through Stripe." << endl;
    return true;
}
