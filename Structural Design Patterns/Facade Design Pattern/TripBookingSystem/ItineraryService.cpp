#include "ItineraryService.hpp"
#include <iostream>
using namespace std;

void ItineraryService::createItinerary(const std::string& user) {
    cout << "Creating itinerary for: " << user << endl;
}
void ItineraryService::cancelTrip(const std::string& user) {
    cout << "Cancelling entire trip for: " << user << endl;
}