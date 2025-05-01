#include <iostream>
#include <string>
#include "header/RideFactory.hpp"

int main()
{
    string type;
    double distance;

    cout << "Enter Ride Type (economy, premium, pool): " << endl;
    cin >> type;

    cout << "Enter distance : " << endl;
    cin >> distance;

    try
    {
        auto ride = RideFactory::createRide(type);
        ride->book(distance);
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
        return 1;
    }
    return 0;
}