#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <vector>
using namespace std;

class Vehicle {
public:
    virtual void move() = 0;
    virtual ~Vehicle() {};
};

#endif