#include "NoDiscount.hpp"
#include <iostream>
using namespace std;

double NoDiscount::applyDiscount(double price) {
    cout << "No discount applied." << endl;
    return price;
}