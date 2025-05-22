#ifndef COMPOSITE_PATTERN_BASE_FARE_HPP
#define COMPOSITE_PATTERN_BASE_FARE_HPP

#include "RideFare.hpp"
#include <string>
using namespace std;


class BaseFare : public RideFare {
        string name;
        double amount;
    
    public: 
        // Constructor 
        BaseFare(const string & name_, double amount_);
        double calculateFare() const override;
};

#endif