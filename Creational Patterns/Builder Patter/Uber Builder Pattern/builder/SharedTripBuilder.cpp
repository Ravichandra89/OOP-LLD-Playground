#include "SharedTripBuilder.hpp"
#include "../product/Trip.hpp"

SharedTripBuilder::SharedTripBuilder() : st(new Trip()) {};

SharedTripBuilder::~SharedTripBuilder()
{
    if (st)
        delete st;
};

void SharedTripBuilder::setPickup(const string &loc)
{
    st->pickupLocation = loc;
};

void SharedTripBuilder::setDrop(const string &loc)
{
    st->dropLocation = loc;
};

void SharedTripBuilder::setCarType(const string &type)
{
    st->carType = type;
};

void SharedTripBuilder::setPayment(const string &payment)
{
    st->paymentMethod = payment;
};

void SharedTripBuilder::setPromoCode(const string &code)
{
    st->promoCode = code;
};

void SharedTripBuilder::addRoutePref(const string &route)
{
    st->routePref.push_back(route);
};

void SharedTripBuilder::enableChildSeat()
{
    st->childSeat = true;
};

Trip *SharedTripBuilder::build()
{
    Trip *result = st;
    st = nullptr;
    return result;
}