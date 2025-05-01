#include <iostream>
#include <memory>
#include <string>

// Header imports
#include "../header/EconomyRide.hpp"
#include "../header/PoolRide.hpp"
#include "../header/PremiumRide.hpp"
#include "../header/Ride.hpp"
#include "../header/RideFactory.hpp"

using namespace std;

unique_ptr<Ride> RideFactory::createRide(const string & type) {
    if (type == "economy") {
        return make_unique<EconomyRide>();
    } else if (type == "premium") {
        return make_unique<PremiumRide>();
    } else if (type == "pool") {
        return make_unique<PoolRide>();
    } else {
        throw invalid_argument("Invalid ride type: " + type);
    }
}
