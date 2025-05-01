#include <iostream>
#include "RozarpayMethod.hpp"

using namespace std;

bool RozarpayMethod::processPayment(double amount)
{
    cout << "Processing payment of $" << amount << " through Rozarpay." << endl;
    return true;
}