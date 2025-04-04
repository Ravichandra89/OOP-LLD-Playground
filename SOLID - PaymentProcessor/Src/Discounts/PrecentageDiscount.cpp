#include "PrecentageDiscount.hpp"
#include <iostream>
using namespace std;

double PrecentageDiscount::applyDiscount(double amount) {
    return amount - (amount * ans / 100);
}

// It Returns the amount after applying the percentage discount.