#ifndef Director_hpp
#define Director_hpp

#include "../builder/ITripBuilder.hpp"

class TripDirector
{
    ITripBuilder *builder_;

public:
    // Constructor
    TripDirector(ITripBuilder *builder);
    void ConstructAirportTrip();
};

#endif