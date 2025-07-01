#include <iostream>
#include <vector>
#include <memory>

#include "item/Clothing.hpp"
#include "item/Electronics.hpp"
#include "item/Grocery.hpp"

#include "visitor/FinalCost.hpp"
#include "visitor/DiscountVisitor.hpp"
#include "visitor/ShippingVisitor.hpp"
#include "visitor/TaxVisitor.hpp"

using namespace std;

int main() {
    vector<unique_ptr<Item>> cart;

    cart.emplace_back(make_unique<Electronics>("Laptop", 1000.00));
    cart.emplace_back(std::make_unique<Grocery>("Apple", 2.5));
    cart.emplace_back(std::make_unique<Clothing>("T-Shirt", 25.0));

    DiscountVisitor discount;
    TaxVisitor tax;
    Shipping ship;

    cout << "---------- Discount ------------" << endl;
    for (auto & it : cart) it->accept(discount);

    cout << "\n--- Taxes ---\n";
    for (auto & it : cart) it->accept(tax);

    cout << "\n--- Shipping Costs ---\n";
    for (auto & it : cart) it->accept(ship);

    return 0;
}