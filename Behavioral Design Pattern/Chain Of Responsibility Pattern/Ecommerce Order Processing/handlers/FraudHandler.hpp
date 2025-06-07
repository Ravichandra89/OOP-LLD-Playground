#ifndef FRAUD_HANDLER_HPP
#define FRAUD_HANDLER_HPP

#include "OrderHandler.hpp"
#include <iostream>
using namespace std;

class FraudHandler : public OrderHandler {
    protected : 
        bool processOrder(shared_ptr<Order> order) override {
            cout << "[Fraud] Performing fraud check for Order #" << order->orderId << "..." << endl;

            if (order->amount > 5000.0) {
                order->isFraudulent = true;
                cout << "[Fraud] Order #" << order->orderId  << " flagged as fraudulent (amount $" << order->amount << ").\n";

                return true;
            }
            cout << "[Fraud] No issues detected. Passing to next handler." << endl;
            return false;
        }
};

#endif