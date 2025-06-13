#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include "Enums.hpp"
#include <string>
using namespace std;


class Vehicle {
    protected : 
        string licensePlate_;
        VehicleType type_;
    
    public : 
        Vehicle(const string & licensePlate, VehicleType type) : licensePlate_(licensePlate), type_(type) {};

        virtual ~Vehicle() = default;

        string getLicensePlate() const {
            return licensePlate_;
        }

        VehicleType getVehicleType() const {
            return type_;
        }
};


#endif