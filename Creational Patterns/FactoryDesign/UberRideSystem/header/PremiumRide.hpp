#ifndef PremiumRide_hpp
#define PremiumRide_hpp

#include "Ride.hpp"
#include <iostream>

using namespace std;

class PremiumRide : public Ride {
    public: 
        string getRideType() const override {
            return "Premium Ride";
        }

        double calculateFare(double distance) override {
            return 20.0 + (distance * 12.0);
        }

        void book(double distance) override {
            cout << "🚘 Booking a Premium Ride for " << distance << " km. Total fare: ₹" << calculateFare(distance) << endl;
        }
};

#endif