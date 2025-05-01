#include "TripDirector.hpp"
#include <iostream>
#include "../builder/ITripBuilder.hpp"

using namespace std;

TripDirector::TripDirector(ITripBuilder *builder) : builder_(builder) {};

void TripDirector::ConstructAirportTrip()
{
    builder_->setPickup("Hotel Taj Palce");
    builder_->setDrop("International Airport");
    builder_->setCarType("Standard");
    builder_->setPayment("Card");
    builder_->enableChildSeat();
    builder_->addRoutePref("No Highways");
};
