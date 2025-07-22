/**
 * Abstract Factory :: Concrete_Notification_Product
 */
#ifndef ABSTRACT_FACTORY_CONCRETE_NOTIFICATION_PRODUCT_HPP
#define ABSTRACT_FACTORY_CONCRETE_NOTIFICATION_PRODUCT_HPP

#include "../utils/user_model.hpp"
#include "../utils/channel_type.hpp"

#include <string>
#include <iostream>
using namespace std;

class Notification {
        string payload;
        User receipent;

    public: 
        // Constructor 
        Notification(const string& pl, const User& user) : payload(pl), receipent(user) {}

        // send_method
        void send() const {
            cout << "Sending to " << receipent.name << "[ " << receipent.address << " ]" << payload << endl;
        }
};

#endif