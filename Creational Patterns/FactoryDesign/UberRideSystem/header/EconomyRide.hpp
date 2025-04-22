#ifndef Economy_hpp
#define Economy_hpp

#include "Ride.hpp"
#include <iostream>
using namespace std;

class EconomyRide : public Ride {
    public: 
        string getRideType() const override {
            return "Economy Type";
        }

        double calculateFare(double distance)  override {
            return 8.0 + (distance * 5.0);
        }

        void book(double distance) override {
            cout << "🚗 Booking an Economy Ride for " << distance << " km. Total fare: ₹" << calculateFare(distance) << endl;
        }
};

#endif