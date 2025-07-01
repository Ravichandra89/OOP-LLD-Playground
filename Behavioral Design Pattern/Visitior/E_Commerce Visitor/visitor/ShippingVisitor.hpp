#ifndef SHIPPING_VISITOR_CONCRETE_VISITOR_HPP
#define SHIPPING_VISITOR_CONCRETE_VISITOR_HPP


#include "Visitor.hpp"
#include "../item/Clothing.hpp"
#include "../item/Electronics.hpp"
#include "../item/Grocery.hpp"
#include <iostream>
using namespace std;

class Shipping : public Visitor {
    public : 
        void visit(Electronics& item) override {
            cout << "Shipping for " << item.name() << ": $25" << endl;
        }

        void visit(Grocery& item) override {
            cout << "Shipping for " << item.name() << ": $5" << endl;
        }

        void visit(Clothing& item) override {
            cout << "Shipping for " << item.name() << ": $10" << endl;
        }
};

#endif