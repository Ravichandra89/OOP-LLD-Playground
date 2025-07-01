#ifndef CLOTHING_HPP
#define CLOTHING_HPP

#include "Items.hpp"

class Clothing : public Item {
        string name_;
        double price_;

    public : 
        Clothing(const string & name, double price) : name_(name), price_(price) {};

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