/***
 * HeaderFile for Flight Booking Sub System - 
 * searchFlight(...)
 * bookFlight(...)
 * cancelFlight(...)
 * getPNRDetails(...)
 * 
 */

#ifndef FLIGHT_SERVICE_HPP
#define FLIGHT_SERVICE_HPP

#include <string>
using namespace std;

class FlightService {
    public: 
        void searchFlight(const string & route, const string & date);
        void bookFlight(const string & user);
        void cancelFlight(const string & bookingId);
        void getPNRDetails(const string & pnr);
};

#endif