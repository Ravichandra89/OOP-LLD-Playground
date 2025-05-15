#include "Product.hpp"
#include <iostream>
#include <memory>

using namespace std;

// Constructor
Product::Product(const string & name, double price) : name(name), price(price){};

// Methods
void Product::display(int indent) const {
    cout << string(indent, ' ') << "- " << name << " ($" << price << ")\n";
};

double Product::getPrice() const {
    return price;
};

