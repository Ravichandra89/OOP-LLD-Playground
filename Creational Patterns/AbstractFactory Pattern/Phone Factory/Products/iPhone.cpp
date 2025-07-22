#include "iPhone.hpp"
#include <iostream>
using namespace std;

// Impelement the getModel & spec Methods
string iPhone::getModel() const
{
    return "iPhone 15 Pro";
}

void iPhone::spec() const
{
    // showing the iPhone model configurations
    cout << "Model: " << getModel() << " Display: 6.1-inch OLED" << " chip: A-16 Apple" << " version 15.1.10" << endl;
}
