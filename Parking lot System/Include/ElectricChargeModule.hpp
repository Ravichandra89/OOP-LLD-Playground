#ifndef ELECTRIC_CHARGE_MODULE_HPP
#define ELECTRIC_CHARGE_MODULE_HPP

#include "ParkingSpot.hpp"
#include <string>
#include <iostream>

using namespace std;

class ElectricChargeModule {
        string chargeId;
        double ratePerHour;
        bool isCharging_;
        chrono::system_clock::time_point startTime_;
    
    public : 
        ElectricChargeModule(const string & id, double rate) : chargeId(id), ratePerHour(rate), isCharging_(false) {};

        // Start Charging Method
        void startCharging() {
            if (!isCharging_) {
                startTime_ = chrono::system_clock::now();
                isCharging_ = true;
                cout << "[Charger Module] Charging started for ID: " << chargeId << endl;
            }
        }

        // Stop Charging Method
        double StopCharging() {
            if (isCharging_) {
                // Calculate the total charge duration
                auto endTime = chrono::system_clock::now();
                double hrs = chrono::duration_cast<chrono::hours>(endTime - startTime_).count();
                isCharging_ = false;
                cout << "[Charger Module] Charging stopped for ID: " << chargeId 
                     << ". Total charge duration: " << hrs << endl;
                return hrs;
            }
            return 0.0;
        }

        // Charge Fees Method
        double calculateChargingFees(double hours) const {
            return hours * ratePerHour;
        }
};

#endif