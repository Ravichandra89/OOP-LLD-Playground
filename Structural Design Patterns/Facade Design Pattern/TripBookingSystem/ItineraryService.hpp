/***
 * Itinerary Service Sub System - 
 * createIntinerary(...)
 * cancelTrip(...)
 */
#ifndef ITINERARY_SERVICE_HPP
#define ITINERARY_SERVICE_HPP

#include <string>
using namespace std;

class ItineraryService {
public:
    void createItinerary(const string& user);
    void cancelTrip(const string& user);
};

#endif