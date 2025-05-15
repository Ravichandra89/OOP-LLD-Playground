#include "ProductCategory.hpp"
#include <iostream>
using namespace std;

// Constructor Initilization
ProductCategory::ProductCategory(const string & name) : name(name) {};

// Methods
void ProductCategory::display(int indent) const {
    cout << string(indent, ' ') << "[Category] " << name<< "\n";
    for (auto & it : products) {
        it->display(indent + 2);
    }
};

double ProductCategory::getPrice() const {
    double total = 0.0;
    for (const auto & it : products) {
        total += it->getPrice();
    }
};

// Add Function 
void ProductCategory::add(unique_ptr<IProduct> product){
    products.push_back(move(product));
};

