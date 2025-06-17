#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command {
    public : 
        virtual ~Command() = default;

        // Pure virtual function to execute the command
        virtual void execute() = 0;
};

#endif