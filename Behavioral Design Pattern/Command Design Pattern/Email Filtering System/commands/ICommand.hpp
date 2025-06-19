#ifndef ITERFACE_COMMAND_HPP
#define INTERFACE_COMMAND_HPP

#include <iostream>
#include "../Invoker/Emai.hpp"

class ICommand {
    public : 
        virtual ~ICommand() = default;
        virtual void execute(Email& email) = 0;
};

#endif