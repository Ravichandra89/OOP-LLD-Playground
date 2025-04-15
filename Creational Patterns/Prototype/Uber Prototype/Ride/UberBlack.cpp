#include "UberBlack.hpp"
#include <iostream>
using namespace std;

// constructor
UberBlack::UberBlack():
pickup(""),
drop(""),
type("UberBlack"),
baseFare(0.0) {};

UberBlack::UberBlack(const UberBlack & ub) :
pickup(ub.pickup),
drop(ub.drop),
type(ub.type),
baseFare(ub.baseFare) {}

// Clone method
unique_ptr<Uber> UberBlack::clone() const {
    return make_unique<UberBlack> (*this);
}

// set pickup location
void UberBlack::setPickupLocation(const string & location) {
    pickup = location;
};

// set drop location
void UberBlack::setDropLocation(const string & location) {
    drop = location;
}
