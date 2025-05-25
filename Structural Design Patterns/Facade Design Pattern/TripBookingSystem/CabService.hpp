/***
 * Cab Service Sub System - 
 * searchCabs(...)
 * bookCab(...)
 * cancelCab(...)
 * trackCab(...)
 */

#ifndef CAB_SERVICE_HPP
#define CAB_SERVICE_HPP

#include <string>
using namespace std;

class CabService {
    public: 
        void searchCabs(const string & pickup, const string &drop);
        void bookCab(const string & user);
        void cancelRide(const string & rideId);
        void trackCab(const string & rideId);
};

#endif