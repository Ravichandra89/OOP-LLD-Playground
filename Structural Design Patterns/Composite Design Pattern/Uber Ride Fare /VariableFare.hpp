#ifndef COMPOSITE_PATTERN_UBER_RIDE_FARE_VARIBLE_HPP
#define COMPOSITE_PATTERN_UBER_RIDE_FARE_VARIBLE_HPP

#include "RideFare.hpp"
#include <string>
using namespace std;

class VariableFare : public RideFare {
        string name;
        double unitRate, units;
    
    public: 
        VariableFare(const string & name, double unitRate, double units);

        double calculateFare() const override;
};

#endif