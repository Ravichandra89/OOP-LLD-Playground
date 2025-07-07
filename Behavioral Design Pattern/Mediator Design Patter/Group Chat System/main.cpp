#include "mediator/Ichat.hpp"
#include "mediator/GroupChat.hpp"
#include "user/ConcreteUser.hpp"
#include <iostream>
#include "user/User.hpp"

int main() {
    GroupChat* room = new GroupChat();

    // add users
    User* alice = new ConcreteUser(room, "Alice");
    User* bob = new ConcreteUser(room, "Bob");
    User* ravi = new ConcreteUser(room, "Ravi");

    room->addUser(alice);
    room->addUser(bob);
    room->addUser(ravi);

    alice->send("Hello everyone");
    bob->send("Hi Alice");
    ravi->send("Good to see you all.");

    delete alice;
    delete bob;
    delete ravi;

    return 0;
}