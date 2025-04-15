#include "Uberx.hpp"
#include <iostream>
using namespace std;

// constructor 
UberX::UberX() : pickup(""), drop(""), type("UberX"), basseFare(0.0) {}

UberX::UberX(const UberX & ub) : 
pickup(ub.pickup),
drop(ub.drop),
type(ub.type),
basseFare(ub.basseFare) {}

// Clone methid
unique_ptr<Uber> UberX::clone() const {
    return make_unique<UberX> (*this);
}

// set pickup location
void UberX::setPickupLocation(const string & location) {
    pickup = location;
};

// set drop location
void UberX::setDropLocation(const string & location) {
    drop = location;
}


