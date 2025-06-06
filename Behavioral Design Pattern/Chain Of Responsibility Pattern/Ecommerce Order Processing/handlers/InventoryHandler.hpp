#ifndef INVENTORY_HANDLER_HPP
#define INVENTORY_HANDLER_HPP

#include "OrderHandler.hpp"
#include "unordered_map"
#include <iostream>

using namespace std;

class InventoryHandler : public OrderHandler {
        unordered_map<string, int> stock_;

    public : 
        InventoryHandler() {
            stock_["Laptop"]    = 5;
            stock_["Mouse"]     = 0;   
            stock_["Keyboard"]  = 10;
            stock_["Monitor"]   = 2;
            stock_["Headset"]   = 0; 
        }
        
    protected : 
        bool processOrder(shared_ptr<Order> order) override {
            cout << "[Order Inventory] Checking Inventory for Order " << order->orderId << "....." << endl;

            for (const auto & it : order->items) {
                auto temp = stock_.find(it);
                if (temp == stock_.end() || temp->second <= 0) {
                    cout << "[Inventory] Item \"" << it << "\" is out of stock. " << "Cannot fulfill Order #" << order->orderId << ".\n";

                    return true;
                }
            }
            cout << "[Inventory] All items in stock. Passing to next handler.\n";
            return false;
        }
};

#endif