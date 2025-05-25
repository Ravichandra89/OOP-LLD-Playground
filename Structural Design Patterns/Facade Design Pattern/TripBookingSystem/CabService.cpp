#include "CabService.hpp"
#include <iostream>

using namespace std;

// Method Definitions
void CabService::searchCabs(const string & pickup, const string & drop) {
    cout << "Searching cabs from " << pickup << " to " << drop << endl;
}

void CabService::bookCab(const string & user) {
    cout << "Booking cab for User: " << user << endl;
}

void CabService::cancelRide(const string & rideId) {
    cout << "Cancelling ride ID: " << rideId << endl;
}

void CabService::trackCab(const string & rideId) {
    cout << "Tracking ride ID: " << rideId << endl;
}
