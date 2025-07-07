#ifndef CONCRETE_USER_HPP
#define CONCRETE_USER_HPP

#include "User.hpp"
#include <iostream>
using namespace std;

class ConcreteUser : public User {
    public : 
        ConcreteUser(ChatRoomMediator* med, const string & username) : User(med, username) {}

        // Concrete Send message
        void send(const string & message) override {
            cout << name << " sends:  " << message << endl;
            mediator->SendMessage(message, this);
        }

        // Concrete receive message
        void receive(const string & message) override {
            cout << name << " receives: " << message << endl;
        }
};

#endif