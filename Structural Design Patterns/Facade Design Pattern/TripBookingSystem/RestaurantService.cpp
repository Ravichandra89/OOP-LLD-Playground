#include "RestaurantService.hpp"
#include <iostream>
using namespace std;

void RestaurantService::searchRestaurant(const string & location) {
    cout << "Searching restaurant in :" << location << endl;
}

void RestaurantService::placeOrder(const string & user) {
    cout << "Placing food order for: " << user << endl;
}

void RestaurantService::cancelOrder(const string & orderId) {
    cout << "Cancelling food order: " << orderId << endl;
}

void RestaurantService::trackOrder(const string & orderId) {
    cout << "Tracking food Order: " << orderId << endl;
}