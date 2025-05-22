#ifndef COMPOSITE_PATTERN_UBER_RIDE_FARE_VARIBLE_HPP
#define COMPOSITE_PATTERN_UBER_RIDE_FARE_VARIBLE_HPP

#include "BaseFare.hpp"
#include <string>

class VariableFare : public BaseFare {
        string name;
        double unitRate, units;
    
    public: 
        VariableFare(const string & name, double unitRate, double units);

        double calculateFare() const override;
};

#endif