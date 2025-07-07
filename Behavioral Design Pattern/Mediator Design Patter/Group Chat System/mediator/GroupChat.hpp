#ifndef GROUP_CHAT_CONCRETE_MDEIATOR_HPP
#define GROUP_CHAT_CONCRETE_MEDIATOR_HPP

#include "Ichat.hpp"
#include "../user/User.hpp"
#include <vector>
#include <iostream>
using namespace std;

class GroupChat : public ChatRoomMediator {
    private : 

        vector<User*> users;

    public : 
        void sendMessage(const string & message, User* sender)  {
            for (auto * it : users) {
                if (it != sender) {
                    it->receive(sender->getName() + ": " + message);
                }
            }
        }

        void addUser(User* user) override {
            users.push_back(user);
        }
};

#endif