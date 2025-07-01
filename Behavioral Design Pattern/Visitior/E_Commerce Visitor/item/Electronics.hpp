#ifndef CONCRETE_ELECTRONICS_ITEM_HPP
#define CONCRETE_ELECTRONICS_ITEM_HPP

#include "Items.hpp"
using namespace std;

class Electronics : public Item {
        string name_;
        double price_;
    public : 
        Electronics(const string& name, double price) : name_(name), price_(price){}

        // Inherited Methods
        string name() const override{
            return name_;
        }

        double price() const override{
            return price_;
        }

        // Accpet the Visitors
        void accept(Visitor& vis) override {
            vis.visit(*this);
        }
};

#endif