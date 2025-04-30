#ifndef ITrip_Builder_hpp
#define ITrip_Builder_hpp

#include "../product/Trip.hpp"

class ITripBuilder {
    public: 
        virtual ~ITripBuilder() = default;
        
        virtual void setPickup(const string&) = 0;
        virtual void setDrop(const string&) = 0;
        virtual void setCarType(const string&) = 0;
        virtual void setPayment(const string&) = 0;
        virtual void setPromoCode(const string&) = 0;
        virtual void addRoutePref(const string&) = 0;
        virtual void enableChildSeat() = 0;

        virtual Trip* build() = 0;
};

#endif