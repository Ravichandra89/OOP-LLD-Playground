#include "Trip.hpp"
#include <iostream>
using namespace std;

// Constructor
Trip::Trip() : carType("standard"), paymentMethod("Card"), promoCode(""), childSeat(false), requestTime(time(nullptr)) {};

void Trip::showDetails() const
{
    cout << "\n <-------Your Trip details------->" << endl;
    cout << "Pickup Location: " << pickupLocation << endl;
    cout << "Drop Location : " << dropLocation << endl;
    cout << "Car Type for Trip: " << carType << endl;
    cout << "Payment Method: " << paymentMethod << endl;

    // Check the PromoCode
    if (!promoCode.empty())
    {
        cout << "Promo Code: " << promoCode << endl;
    }

    if (!routePref.empty())
    {
        for (auto &it : routePref)
        {
            cout << it << " , ";
        }
        cout << endl;
    };

    cout << "Child Seat Service : " << (childSeat == true ? "Yes" : "No") << endl;

    cout << "Trip Requested At : " << requestTime << endl;
};
