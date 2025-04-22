#ifndef Economy_hpp
#define Economy_hpp

#include "Ride.hpp"
#include <iostream>
using namespace std;

class Economy : public Ride {
    double ans = 0.0;
    public: 
        string getRideType() const override {
            return "Economy Type";
        }

        double calculateFare(double distance)  override {
            ans = 8.0 + (distance * 5.0);
            return ans;
        }

        void book(double distance) override {
            cout << "🚗 Booking an Economy Ride for " << distance << " km. Total fare: ₹" << ans << endl;
        }
};

#endif