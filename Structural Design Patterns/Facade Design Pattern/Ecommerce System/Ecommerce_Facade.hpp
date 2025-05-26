/**
 * @file Ecommerce_Facade.hpp
 */

#ifndef ECOMMERCE_FACADE_HPP
#define ECOMMERCE_FACADE_HPP

#include "Authentication.hpp"
#include "Inventory.hpp"
#include "Notification.hpp"
#include "Order.hpp"
#include "Payment.hpp"
#include "Product.hpp"
#include "Shipping.hpp"

#include <string>
using namespace std;

class Facade {
        Authentication auth;
        Inventory inventory;
        Notification notification;
        Order order;
        Payment payment;
        Product product;
        Shipping ship;

    public: 
        string purchase(const string & username, const string & password, const string & productQuery, int quantity, double amount, const string & paymentMethod);

        void trackOrder(const string & token, const string & orderId);
        void cancelOrder(const string & token, const string & orderId);

};

#endif