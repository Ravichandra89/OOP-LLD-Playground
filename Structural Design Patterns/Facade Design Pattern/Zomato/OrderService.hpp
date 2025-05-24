/**
 * Order Service with createOrder - Method
 */

#ifndef FACADE_PATTERN_ORDER_SERVICE_HPP
#define FACADE_PATTERN_ORDER_SERVICE_HPP

#include <string>
using namespace std;

class OrderService {
    public: 
        OrderService() = default;
        int createOrder(const string & item, int quantity);
};

#endif