#ifndef DRIVER_RECEIVER_HPP
#define DRIVER_RECEIVER_HPP

#include <iostream>
#include <string>

using namespace std;

class DriverService {
    public: 
        void notifyDriver() {
            cout << "[DriverService] Driver notified for the trip" << endl;
        }
};

#endif