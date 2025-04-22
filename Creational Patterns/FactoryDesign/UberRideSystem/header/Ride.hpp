#ifndef Ride_hpp
#define Ride_hpp

#include <string>
using namespace std;

class Ride
{
public:
    virtual ~Ride() = default;
    virtual string getRideType() const = 0;
    virtual double calculateFare(double distance) = 0;
    virtual void book(double distance) = 0;
};

#endif