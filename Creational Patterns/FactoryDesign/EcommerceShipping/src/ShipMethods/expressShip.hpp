#ifndef expressShip_hpp
#define expressShip_hpp

#include <iostream>
#include "./Interface/Ishipping.hpp"

class expressShip : public Ishipping
{
public:
    void calculatePrice(double weight, double distance) override;
};

#endif
