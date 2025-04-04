#ifndef BICYCLE_HPP
#define BICYCLE_HPP

#include "vehicle.hpp";

class Bicyle : public Vehicle {
public:
    void move() override;
};

#endif