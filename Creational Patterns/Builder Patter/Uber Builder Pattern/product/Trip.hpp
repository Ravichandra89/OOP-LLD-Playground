#ifndef Trip_hpp
#define Trip_hpp

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class ITripBuilder;

class Trip {
    friend class ITripBuilder;
    friend class UberTripBuilder;

    private: 
        string pickupLocation;
        string dropLocation;
        string carType;
        string paymentMethod;
        string promoCode;
        bool childSeat;

        vector<string> routePref;
        time_t requestTime;

        // private Constructor
        Trip();
    
    public: 
        void showDetails() const;
};

#endif