#ifndef NOTIFICATION_HANDLER_HPP
#define NOTIFICATION_HANDLER_HPP

#include "OrderHandler.hpp"
#include <iostream>

using namespace std;

class NotificationHandler : public OrderHandler {
    protected : 
        bool processOrder (shared_ptr<Order> order) override {
            cout << "[Notification] Sending confirmation to " << order->customerName << "..." << endl;

            if (!order->shiped) {
                cout << "[Notification] Cannot send notification: Order #" << order->orderId << " has not been shipped" << endl;

                return true; 
            }
            cout << "[Notification] Order Notification has Sent" << endl;
            return false;
        }
};

#endif