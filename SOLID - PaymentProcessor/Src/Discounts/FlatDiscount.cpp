#include "FlatDiscount.hpp"
#include <iostream>

using namespace std;

double FlatDiscount::applyDiscount(double amount)
{
    if (amount < ans)
    {
        cout << "Discount exceeds the amount. No discount applied." << endl;
        return amount;
    }
    return amount - ans;
}