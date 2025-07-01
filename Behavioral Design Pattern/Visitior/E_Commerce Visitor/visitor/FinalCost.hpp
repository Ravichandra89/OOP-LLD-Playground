#ifndef FINAL_COST_VISITOR_HPP
#define FINAL_COST_VISITOR_HPP

#include "Visitor.hpp"
#include "../item/Clothing.hpp"
#include "../item/Electronics.hpp"
#include "../item/Grocery.hpp"
#include <iostream>
using namespace std;

class FinalCost : public Visitor {
    public : 
        void visit(Electronics& item) override {
            double discount = item.price() * 0.10;
            double tax = item.price() * 0.18;
            double shipping = 25;
            double total = item.price() - discount + tax + shipping;
            cout << "Final cost for " << item.name() << ": $" << total << endl;
        }

        void visit(Grocery& item) override {
            double discount = item.price() * 0.05;
            double tax = item.price() * 0.05;
            double shipping = 5;
            double total = item.price() - discount + tax + shipping;
            cout << "Final cost for " << item.name() << ": $" << total << endl;
        }

        void visit(Clothing& item) override {
            double discount = item.price() * 0.15;
            double tax = item.price() * 0.12;
            double shipping = 10;
            double total = item.price() - discount + tax + shipping;
            cout << "Final cost for " << item.name() << ": $" << total << endl;
        }
};

#endif