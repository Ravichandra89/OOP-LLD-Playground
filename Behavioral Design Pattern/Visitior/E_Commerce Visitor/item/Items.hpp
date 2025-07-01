#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <string>
#include "../visitor/Visitor.hpp"
using namespace std;

class Item {
    public : 
        virtual ~Item() = default;
        virtual string name() const = 0;
        virtual double price() const = 0;

        // Accepting visitor
        virtual void accept(Visitor& vis) = 0;
};

#endif