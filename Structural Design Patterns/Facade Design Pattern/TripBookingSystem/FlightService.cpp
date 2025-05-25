#include "FlightService.hpp"
#include <iostream>
using namespace std;

// search method
void FlightService::searchFlight(const string & route, const string & date) {
    cout << "Searching Flights for route " << route << " on" << date << endl;
}

void FlightService::bookFlight(const string & user) {
    // TODO: Call the Flight Booking Logic in Real Practices
    cout << "Booking flight for " << user << endl;
}

void FlightService::cancelFlight(const string & bookingId) {
    cout << "Cancelling flight booking ID: " << bookingId << endl;
}

void FlightService::getPNRDetails(const string & pnr) {
    cout << "Fetching PNR Details for pnr Number: " << pnr << endl;
}
