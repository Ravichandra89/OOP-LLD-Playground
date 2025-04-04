#ifndef CAR_HPP
#define CAR_HPP

#include "EngineVehicle.hpp";

class Car : public EngineVehicle
{
public:
    void startEngine() override;
    void move() override;
    void refule() override;
};

#endif