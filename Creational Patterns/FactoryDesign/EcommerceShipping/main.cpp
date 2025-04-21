#include <iostream>
#include "src/ShippingFactory.hpp"
using namespace std;

int main() {
    string method = "express";
    double weight = 5.5;
    double distance = 100;

    try
    {
        auto calculate = ShippingFactory::create(method);
        calculate->calculatePrice(weight, distance);
        cout << "Calculated price successfully!" << endl;
    }
    catch(const std::exception& ex)
    {
        cerr << "Error: " << ex.what() << endl;
        return 1;
    }
    
}