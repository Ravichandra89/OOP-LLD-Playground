#include "Pizza.hpp"
#include <iostream>
using namespace std;

// Initilize the size and variable
Pizza::Pizza()
{
    size = "Medium";
    crust = "Thin";
    cheese = "Mozzorella";
    sauce = "Tamoto";
}

void Pizza::showPizza() const
{
    cout << "Pizza Details " << endl;
    cout << "Size : " << size << endl;
    cout << "Sauce : " << sauce << endl;
    cout << "Crust : " << crust << endl;
    cout << "Cheese: " << cheese << endl;

    // Show the toppings
    if (!topping.empty()) {
        for (const auto & it : topping) {
            cout << " " << it;
        }
        cout << endl;
    }
}