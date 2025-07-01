#ifndef DISCOUNT_CONCRETE_VISITOR_HPP
#define DISCOUNT_CONCRETE_VISITOR_HPP

#include "Visitor.hpp"
#include "../item/Electronics.hpp"
#include "../item/Clothing.hpp"
#include "../item/Grocery.hpp"

#include <iostream>
using namespace std;

class DiscountVisitor : public Visitor {
    public : 
        void visit(Electronics& item) override {
            double p = 0.10;
            cout << "Discount on " << item.name() << ": $" << item.price() * p << endl; 
        }

        void visit(Grocery& item) override {
            double p = 0.05;
            cout << "Discount on " << item.name() << ": $" << item.price()*p << endl;
        }

        void visit(Clothing& item) override {
            double p = 0.15;
            cout << "Discount on " << item.name() << ": $" << item.price()*p << endl;
        }
};

#endif