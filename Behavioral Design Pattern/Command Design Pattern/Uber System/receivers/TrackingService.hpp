#ifndef TRACKING_SERVICE_HPP
#define TRACKING_SERVICE_HPP

#include <iostream>
using namespace std;

class TrackingService {
    public : 
        void startTracking() {
            cout << "[Tracking Service] Trip tracking started" << endl;
        }
};

#endif