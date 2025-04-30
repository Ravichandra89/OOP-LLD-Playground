#ifndef UberTrip_Builder_hpp
#define UberTrip_Builder_hpp

#include "../product/Trip.hpp"
#include "ITripBuilder.hpp"

class UberTripBuilder : public ITripBuilder
{
private:
    Trip *tp;

public:
    UberTripBuilder();
    ~UberTripBuilder();

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