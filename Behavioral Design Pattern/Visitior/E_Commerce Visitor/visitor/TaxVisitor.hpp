#ifndef TAX_CONCRETE_VISITOR_HPP
#define TAX_CONCRETE_VISITOR_HPP

#include "Visitor.hpp"
#include "../item/Clothing.hpp"
#include "../item/Electronics.hpp"
#include "../item/Grocery.hpp"

#include <iostream>
using namespace std;

class TaxVisitor : public Visitor {
    public : 
        void visit(Electronics& item) override {
            double t = 0.18;
            cout << "Tax on " << item.name() << ": $" << item.price()*t << endl;
        }

        void visit(Grocery& item) override {
            double t = 0.05;
            cout << "Tax on " << item.name() << ": $" << item.price()*t << endl;
        }

        void visit(Clothing& item) override {
            double t = 0.12;
            cout << "Tax on " << item.name() << ": $" << item.price()*t << endl;
        }
};

#endif