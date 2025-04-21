#include "expressShip.hpp"
#include <iostream>
using namespace std;

void expressShip::calculatePrice(double weight, double distance) {
    double price = 10.0 + 1.0 * weight + 0.2 * distance;

    cout << "Express Shipping Price : $" << price << " For weight: " << weight << " and distance: " << distance << endl;
};