#ifndef INTERFACE_COLLEGUE_HPP
#define INTERFACE_COLLEGUE_HPP

#include <string>
#include "../mediator/Ichat.hpp"
using namespace std;

class User {
    protected : 
        ChatRoomMediator* mediator;
        string name;
    
    public : 
        User(ChatRoomMediator* mediator, const string & username) : mediator(mediator), name(username) {}

        virtual void send(const string & message) = 0;
        virtual void receive(const string & message) = 0;

        string getName() const {
            return name;
        }

        virtual ~User() = default;

};

#endif