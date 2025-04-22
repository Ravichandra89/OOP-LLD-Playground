#ifndef RideFactory_hpp
#define RideFactory_hpp

#include <iostream>
#include "Ride.hpp"
#include <memory>
#include <string>

class RideFactory
{
public:
    static unique_ptr<Ride> createRide(const string &RideType);
};

#endif