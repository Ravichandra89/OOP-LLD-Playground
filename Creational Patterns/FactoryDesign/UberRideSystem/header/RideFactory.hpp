#ifndef RideFactory_hpp
#define RideFactory_hpp

#include <iostream>
#include <memory>
#include <string>

#include "Ride.hpp"

class RideFactory
{
public:
    static std::unique_ptr<Ride> createRide(const std::string &RideType);
};

#endif
