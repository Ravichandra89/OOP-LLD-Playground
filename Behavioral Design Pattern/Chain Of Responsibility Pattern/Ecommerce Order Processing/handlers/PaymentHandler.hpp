#ifndef PAYMENT_HANDLER_HPP
#define PAYMENT_HANDLER_HPP

#include <string>
#include <iostream>
#include "OrderHandler.hpp"
using namespace std;

class PaymentHandler : public OrderHandler {
    protected : 
        bool processOrder(shared_ptr<Order> order) override {
            cout << "[Paymet Handler] Processing payment for Order #" << order->orderId << "..." << endl;

            // Check alreay pay or not
            if (order->isPaid) {
                cout << "[Payment] Already paid, for Order " << order->orderId << endl;
            }

            if (order->amount < 10000.0) {
                order->isPaid = true;
                cout << "[Payment] Payment of $" << order->amount << "succeeded. Passing to next handler." << endl;

                return false;
            } else {
                cout << "[Payment] Payment Failed or requires manual review." << "Stopping Order #" << order->orderId << endl;
                return true;
            }

        }
};

#endif