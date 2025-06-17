#ifndef AC_COMMAND_HPP
#define AC_COMMAND_HPP

#include "Command.hpp"
#include "../devices/AC.hpp"
#include <memory>
using namespace std;

class AcOnCommand : public Command
{
    shared_ptr<AirConditioner> ac_;

public:
    // Constructor.
    AcOnCommand(shared_ptr<AirConditioner> ac) : ac_(ac) {};

    void execute() override
    {
        ac_->on();
    }
};

class AcOffCommand : public Command
{
    shared_ptr<AirConditioner> ac_;

public:
    AcOffCommand(shared_ptr<AirConditioner> ac) : ac_(ac) {};

    void execute() override
    {
        ac_->off();
    }
};

class AcSetTemperatureCommand : public Command
{
    shared_ptr<AirConditioner> ac_;
    double temperature_;

public:
    AcSetTemperatureCommand(shared_ptr<AirConditioner> ac, double temperature) : ac_(ac), temperature_(temperature) {};

    // sets the temperature of the AC
    void execute() override
    {
        ac_->setTemperature(temperature_);
    }
};

#endif