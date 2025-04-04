#ifndef ENGINE_VEHICLE_HPP
#define ENGINE_VEHICLE_HPP

#include "vehicle.hpp";

class EngineVehicle : public Vehicle
{
public:
    // define here the functions of vehicle
    virtual void startEngine() = 0;
    virtual void refule() = 0;
};

#endif