#ifndef  ELECTRIC_SPOT_HPP
#define ELECTRIC_SPOT_HPP

#include "ElectricChargeModule.hpp"
#include "ParkingSpot.hpp"

#include <string>
#include <iostream>

using namespace std;

class ElectricSpot : public ParkingSpot {
        unique_ptr<ElectricChargeModule> chargeModule_;
    
    public : 
        // Constructor 
        ElectricSpot(const string & spotId, double ratePerHour) : ParkingSpot(spotId, ParkingSpotType::ELECTRIC), chargeModule_(make_unique<ElectricChargeModule> (spotId + "_charger", ratePerHour)) {};

        // canVehicleFitSpot Function 
        bool canFitVehicleType(const shared_ptr<Vehicle> vehicle) const override {
            return vehicle->getVehicleType() == VehicleType::ElectricCar;
        }

        // Occupy the spot
        void occupy(const shared_ptr<Vehicle> vehicle)  override {
            ParkingSpot::occupy(vehicle);

            // Start charging the Electric Vehicle
            chargeModule_->startCharging();
        }

        void freeSpot() override {
            // stop charging first for Electric Vehicle
            double hrs = chargeModule_->StopCharging();
            double chargeFees = chargeModule_->calculateChargingFees(hrs);
            cout << "[ElectricSpot] Charging fees for duration " << hrs << "hours: $" << chargeFees << endl;

            // Free up the parking spot
            ParkingSpot::freeSpot();
        }


#endif