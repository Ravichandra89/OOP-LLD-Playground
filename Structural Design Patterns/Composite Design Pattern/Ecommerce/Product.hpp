#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "IProduct.hpp"
#include <iostream>
using namespace std;

class Product : public IProduct {
        string name;
        double price;

    public: 
        Product(const string & name, double price);
        void display(int indent = 0) const override;
        double getPrice() const override;
};

#endif