#include "TripFacade.hpp"
#include <iostream>

using namespace std;

int main() {
    TripFacade trip;
    string user = "Ravi";
    
    trip.bookTrip(user);
    cout << "\n--- Later ---\n\n";

    trip.cancelTrip(user);
    return 0;
}