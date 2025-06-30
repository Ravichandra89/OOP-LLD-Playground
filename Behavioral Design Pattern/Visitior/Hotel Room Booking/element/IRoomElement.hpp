#ifndef INTERFACE_ROOM_ELEMENT_HPP
#define INTERFACE_ROOM_ELEMENT_HPP

#include "../visitor/Visitor.hpp"
#include <memory>
using namespace std;

class IRoomElement {
    public : 
        virtual ~IRoomElement() = default;
        virtual void accept(Visitor& vis) = 0;
};

#endif