/***
 * Restaurant Service Sub System - 
 * searchRestaurant(...)
 * placeOrder(...)
 * cancelOrder(...)
 * trackOrder(...)
 */

#ifndef RESTAURANT_SERVICE_HPP
#define RESTAURANT_SERVICE_HPP

#include <string>
using namespace std;

class RestaurantService {
    public: 
        void searchRestaurant(const string & location);
        void placeOrder(const string & user);
        void cancelOrder(const string & orderId);
        void trackOrder(const string & orderId);
};

#endif