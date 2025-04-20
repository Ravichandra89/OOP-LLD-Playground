#include "./StripeMethod.hpp"
#include <iostream>
using namespace std;

void StripeMethod::processPayment(double amount)
{
    cout << "Processing payment of $" << amount << " through Stripe." << endl;
}
