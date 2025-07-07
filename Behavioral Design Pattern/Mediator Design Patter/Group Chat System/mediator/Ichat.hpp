#ifndef MEDIATOR_INTERFACE_HPP
#define MEDIATOR_INTERFACE_HPP

#include <string>
using namespace std;

class User;

class ChatRoomMediator {
    public : 
        virtual ~ChatRoomMediator() = default;
        virtual void SendMessage(const string & message, User* sender) = 0;
        virtual void addUser(User* user) = 0;
};

#endif