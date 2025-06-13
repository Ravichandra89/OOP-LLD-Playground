#ifndef PARKING_SPOT_HPP
#define PARKING_SPOT_HPP

#include "Enums.hpp";
#include "Vehicle.hpp"

#include <string>
#include <memory>
#include <iostream>

using namespace std;

class ParkingSpot {
    protected : 
        string spot_id;
        ParkingSpotType type_;
        bool is_Free;
        shared_ptr<Vehicle> currentVehicle;
    
    public : 
        ParkingSpot(const string & id, ParkingSpotType type) : spot_id(id), type_(type), is_Free(true), currentVehicle(nullptr) {};

        // Destructor
        virtual ~ParkingSpot() = default;

        // Getters
        string getSpotId() const {
            return spot_id;
        }

        ParkingSpotType getType() const {
            return type_;
        }

        bool isFree() const {
            return is_Free;
        }

        virtual bool canFitVehicleType(const shared_ptr<Vehicle> vehicle) const {
            // check the Vehicle type 
            VehicleType vt = vehicle->getVehicleType();

            switch(type_) {
                case ParkingSpotType::COMPACT:
                    return (vt == VehicleType::Car || vt == VehicleType::Van || vt == VehicleType::ElectricCar);
                
                case ParkingSpotType::LARGE:
                    return true;
                
                case ParkingSpotType::HANDICAPPED:
                    return true;
                
                case ParkingSpotType::MOTORCYCLE:
                    return (vt == VehicleType::Motorcycle);

                case ParkingSpotType::ELECTRIC: 
                    return (vt == VehicleType::ElectricCar);

                default: 
                    return false;
            }

        }

        // Occupy the parking spot with a vehicle
        virtual void occupy(const shared_ptr<Vehicle> vehicle) {
            is_Free = false;
            currentVehicle = vehicle;
            cout << "Parking spot" << spot_id << " is now occupied by vehicle with license plate: " << vehicle->getLicensePlate() << endl;
        }

        // Free the Parking Spot
        virtual void freeSpot() {
            if (currentVehicle) {
                cout << "Parking spot" << spot_id << " is now free from vehicle with license plate: " << currentVehicle->getLicensePlate() << endl;
            }

            is_Free = true;
            currentVehicle = nullptr;
        }
};

#endif