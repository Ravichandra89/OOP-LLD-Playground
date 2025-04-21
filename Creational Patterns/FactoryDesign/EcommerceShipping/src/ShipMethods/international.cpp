#include "international.hpp"
#include <iostream>
using namespace std;

void international::calculatePrice(double weight, double distance) {
    double price = 20.0 + 2.0 * weight + 0.5 * distance;

    cout << "International Shipping Price : $" << price << " For weight: " << weight << " and distance: " << distance << endl;
};