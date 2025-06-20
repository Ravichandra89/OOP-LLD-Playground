#ifndef INTERFACE_TRIP_COMMAND_HPP
#define INTERFACE_TRIP_COMMAND_HPP

#include <string>
using namespace std;

class ITripCommand {
    public : 
        virtual ~ITripCommand() = default;
        virtual void execute() = 0;
};

#endif