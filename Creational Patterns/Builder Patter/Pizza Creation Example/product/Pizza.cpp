#include "Pizza.hpp"
#include <iostream>
using namespace std;

Pizza::Pizza()
    : size_("Medium"), crust_("Thin"), sauce_("Tomato"), cheese_("Mozzarella") {}

void Pizza::showPizza() const
{
    cout << "Pizza Details:\n";
    cout << " Size: " << size_ << "\n";
    cout << " Crust: " << crust_ << "\n";
    cout << " Sauce: " << sauce_ << "\n";
    cout << " Cheese: " << cheese_ << "\n";
    if (!toppings_.empty())
    {
        cout << " Toppings:";
        for (const auto &t : toppings_)
            cout << " " << t;
        cout << "\n";
    }
    cout << std::endl;
}
