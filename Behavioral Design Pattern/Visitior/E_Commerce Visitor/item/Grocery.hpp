#ifndef GROCERY_CONCRETE_ITEM_HPP
#define GROCERY_CONCRETE_ITEM_HPP

#include "Items.hpp"

class Grocery : public Item {
        string name_;
        double price_;
    public : 

        Grocery(const string& name, double price) : name_(name), price_(price){};

        string name() const override {
            return name_;
        }

        double price() const override {
            return price_;
        }

        void accept(Visitor& vis) override {
            vis.visit(*this);
        }
};

#endif