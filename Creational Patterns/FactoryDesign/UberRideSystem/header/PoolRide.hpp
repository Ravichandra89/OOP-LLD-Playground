#ifndef PoolRide_hpp
#define PoolRide_hpp

#include "Ride.hpp"
#include <iostream>
using namespace std;

class PoolRide : public Ride {
    public: 
        string getRideType() const override {
            return "Pool Ride";
        };

        double calculateFare(double distance) override {
            return 5.0 + (distance * 3.0); 
        }

        void book(double distance ) override {
            cout << "🚕 Booking a Pool Ride for " << distance << " km. Total fare: ₹" << calculateFare(distance) << endl;
        }
};

#endif