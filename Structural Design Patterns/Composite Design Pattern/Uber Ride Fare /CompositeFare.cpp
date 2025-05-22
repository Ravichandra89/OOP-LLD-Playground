#include "CompositeFare.hpp"
#include <iostream>
using namespace std;

// Adding Component
void CompositeFare::addComponent(unique_ptr<RideFare> comp) {
    components.push_back(move(comp));
}


double CompositeFare::calculateFare() const {
    double total = 0;
    for (const auto & it : components) {
        total += it->calculateFare();
    }
    return total;
}


