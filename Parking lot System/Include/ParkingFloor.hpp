#ifndef PARKING_DISPLAY_BOARD_HPP
#define PARKING_DISPLAY_BOARD_HPP

#include "ParkingSpot.hpp"
#include "ParkingDisplayBoard.hpp"
#include "Enums.hpp"
#include "ElectricSpot.hpp"
#include "Vehicle.hpp"

#include <string>
#include <map>
#include <vector>
#include <memory>
#include <iostream>

using namespace std;

class ParkingDisplayBoard;

class ParkingFloor
{
    string floorId;
    ParkingDisplayBoard displayBoard_;
    vector<shared_ptr<ParkingSpot>> parkingSpots_;

    // free spots count
    map<ParkingSpotType, int> free_;

public:
    // Constructor
    ParkingFloor(const string &id) : floorId(id), displayBoard_("DisplayBoard_" + floorId) {};

    // Getters
    string getFloorId() const
    {
        return floorId;
    }

    // Add a parking spot to the floor
    void addParkingSpot(const shared_ptr<ParkingSpot> &spot)
    {
        ParkingSpotType type = spot->getType();
        parkingSpots_.push_back(spot);

        // Update the free spots count
        free_[type]++;
        displayBoard_.updateFreeSpotsCount(free_);
    }

    // Assign a spot to a vehicle
    ParkingSpot *assignSpotToVehicle(const shared_ptr<Vehicle> &vehicle)
    {
        for (auto &it : parkingSpots_)
        {
            // if free and can fit the vehicle type
            if (it->isFree() && it->canFitVehicleType(vehicle))
            {
                it->occupy(vehicle);

                // Update the free spots count
                free_[it->getType()]--;
                displayBoard_.updateFreeSpotsCount(free_);
                return it.get();
            }
        }

        return nullptr; // There are no free spots available for vehicle
    }

    // release a parking spot
    void releaseSpot(ParkingSpot *spot)
    {
        if (!spot)
            return;
        spot->freeSpot();

        // Increment the free spots count
        free_[spot->getType()]++;
        displayBoard_.updateFreeSpotsCount(free_);
    }

    // check has any free parking spots - on the floor
    bool hasFreeParkingSpots(const shared_ptr<Vehicle> &vehicle) const
    {
        ParkingSpotType type = ParkingSpotType::COMPACT;

        // Get parking type
        VehicleType vt = vehicle->getVehicleType();

        switch (vt)
        {
        case VehicleType::ElectricCar:
            type = ParkingSpotType::ELECTRIC;
            break;

        case VehicleType::Motorcycle:
            type = ParkingSpotType::MOTORCYCLE;
            break;

        case VehicleType::Car:
            type = ParkingSpotType::COMPACT;
            break;

        case VehicleType::Van:
        case VehicleType::Truck:
            type = ParkingSpotType::LARGE;
            break;

        case VehicleType::Bus:
            type = ParkingSpotType::LARGE; // Assuming Bus can fit in Large spot
            break;

        default:
            return false;
        }

        // Check if there is a free spots or not
        auto it = free_.find(type);
        return it != free_.end() && it->second > 0;
    }

    void updateDisplayBoard()
    {
        // Update the display board with the current free spots count
        displayBoard_.updateFreeSpotsCount(free_);
    }

    // TODO: Exposing Customer Information from the CustomerPortal
};

#endif