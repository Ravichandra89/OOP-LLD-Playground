/**
 * Interface class for the composite based Ride fare system
 * 
 */

#ifndef COMPOSITE_PATTERN_UBER_RIDE_FARE_SYSTEM_HPP
#define COMPOSITE_PATTERN_UBER_RIDE_FARE_SYSTEM_HPP

class RideFare {
    public: 
        virtual ~RideFare() = default;
        virtual double calculateFare() const = 0;

};

#endif