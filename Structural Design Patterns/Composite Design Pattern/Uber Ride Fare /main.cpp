#include "RideFare.hpp"
#include "CompositeFare.hpp"
#include "BaseFare.hpp"
#include "VariableFare.hpp"

#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Make Root Component
    CompositeFare ride;

    // Fixed Components
    ride.addComponent(make_unique<BaseFare> ("Base Fare", 3.50));
    ride.addComponent(make_unique<BaseFare> ("Booking Fee", 2.00));
    ride.addComponent(make_unique<BaseFare>("Toll", 5.42));

    // Variable Component
    ride.addComponent(make_unique<VariableFare> ("Distance Fare", 1.25, 10));
    ride.addComponent(make_unique<VariableFare> ("Time Fare", 0.50, 15));

    cout << "Total Ride Fare: $ " << ride.calculateFare() << endl;
    return 0;
}