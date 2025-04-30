/*
Real-World Example: UBER Trip Construction using Builder Pattern

Scenario in a Google LLD Interview:
"Design an Uber-like Trip object which has many optional and mandatory attributes: pickup location, dropoff location, car type (Standard, XL, Black), payment method, promo code, estimated time of arrival, route preferences (avoid tolls, highways), and special services (child seat).
How would you cleanly construct such a Trip object step-by-step without ending up with a telescoping constructor?"

Approach:
1. Identify the Product: `Trip` with private constructor and rich fields.
2. Define a Builder interface (`ITripBuilder`) with methods to set each attribute.
3. Implement a Concrete Builder (`UberTripBuilder`) that assembles the `Trip`.
4. (Optional) Director (`TripDirector`) to define common trip presets (e.g., airport transfer).
5. Client code uses either builder directly or via Director to get a fully-configured `Trip`.

This pattern tackles the complexity of constructing objects with many optional parameters, improves readability, and separates the construction logic.
*/

// Directory Structure:
// Builder/
// ├── ITripBuilder.hpp
// └── UberTripBuilder.hpp
//     UberTripBuilder.cpp
// Product/
// ├── Trip.hpp
// └── Trip.cpp
// Director/
// ├── TripDirector.hpp
// └── TripDirector.cpp
// main.cpp

#include "builder/UberTripBuilder.hpp"
#include "builder/SharedTripBuilder.hpp"
#include "director/TripDirector.hpp"
#include <memory>

int main()
{
    // Uber Trip
    UberTripBuilder uberBuilder;
    TripDirector director1(&uberBuilder);
    director1.ConstructAirportTrip();
    std::unique_ptr<Trip> uberTrip(uberBuilder.build());
    uberTrip->showDetails();

    // Shared Trip
    SharedTripBuilder sharedBuilder;
    sharedBuilder.setPickup("Connaught Place");
    sharedBuilder.setDrop("New Delhgi Railway Station");
    sharedBuilder.setCarType("Shared");
    sharedBuilder.setPayment("UPI");
    sharedBuilder.setPromoCode("SAVE50");
    sharedBuilder.addRoutePref("Avoid Tolls");
    unique_ptr<Trip> sharedTrip(sharedBuilder.build());
    sharedTrip->showDetails();

    return 0;
}