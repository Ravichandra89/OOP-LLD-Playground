#include "PrecentDiscount.hpp"
#include <iostream>
using namespace std;

double PrecentDiscount::apply(double amount) {
    return amount - (amount * precentage / 100);
}
