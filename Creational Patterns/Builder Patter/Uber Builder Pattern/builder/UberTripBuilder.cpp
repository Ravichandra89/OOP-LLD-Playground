#include "UberTripBuilder.hpp"
#include <iostream>
#include "../product/Trip.hpp"
using namespace std;

UberTripBuilder::UberTripBuilder() : tp(new Trip()){};

UberTripBuilder::~UberTripBuilder() {
    if (tp) delete tp;
};

// Implement the Methods -> Concrete Builder
void UberTripBuilder::setPickup(const string & location) {
    tp->pickupLocation = location;
};

void UberTripBuilder::setDrop(const string & location) {
    tp->dropLocation = location;
};

void UberTripBuilder::setCarType(const string & type){
    tp->carType = type;
};

void UberTripBuilder::setPayment(const string & payment) {
    tp->paymentMethod = payment;
};

void UberTripBuilder::setPromoCode(const string & code) {
    tp->promoCode = code;
};

void UberTripBuilder::addRoutePref(const string & route) {
    tp->routePref.push_back(route);
};

void UberTripBuilder::enableChildSeat() {
    tp->childSeat = true;
};

Trip* UberTripBuilder::build() {
    Trip* result = tp;
    tp = nullptr;
    return result;
}

