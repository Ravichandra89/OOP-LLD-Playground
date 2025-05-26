/***
 * Inventory Management Service - Sub System
 *  - checkStock(...)
 *  - updateStock(...)
 */

#ifndef INVENTORY_SYSTEM_HPP
#define INVENCTORY_SYSTEM_HPP

#include <string>
using namespace std;

class Inventory {
    public: 
        Inventory() = default;
        bool checkStock(const string & productId, int quantity);
        void updateStock(const string & productId, int quantity);
};

#endif