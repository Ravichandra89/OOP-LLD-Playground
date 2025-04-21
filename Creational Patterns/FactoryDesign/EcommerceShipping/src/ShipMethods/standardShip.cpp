#include "standardShip.hpp"
#include <iostream>
using namespace std;

void standardShip::calculatePrice(double weight, double distance) {
    double price = 5.0 + 0.5 * weight + 0.1 * distance;

    cout << "Standard Shipping Price : $" << price << "For weight: " << weight << " and distance: " << distance << endl;
};


