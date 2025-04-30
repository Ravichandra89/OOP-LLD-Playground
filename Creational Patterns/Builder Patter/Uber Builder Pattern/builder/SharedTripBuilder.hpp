#ifndef SHAREDTRIPBUILDER_HPP
#define SHAREDTRIPBUILDER_HPP

#include "ITripBuilder.hpp"
using namespace std;

class SharedTripBuilder : public ITripBuilder
{
private:
    Trip *st;

public:
    SharedTripBuilder();
    ~SharedTripBuilder();
    void setPickup(const string &) override;
    void setDrop(const string &) override;
    void setCarType(const string &) override;
    void setPayment(const string &) override;
    void setPromoCode(const string &) override;
    void addRoutePref(const string &) override;
    void enableChildSeat() override;
    Trip *build() override;
};

#endif