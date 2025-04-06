#include <iostream>
#include "FlatDiscount.hpp"

using namespace std;

double FlatDiscount::apply(double amount) {
    return amount - discount;
}
