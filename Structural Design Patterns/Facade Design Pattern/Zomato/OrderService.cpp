#include "OrderService.hpp"
#include <iostream>
using namespace std;

int OrderService::createOrder(const string & item, int quantity) {
    static int temp = 1;
    int orderId = temp++;
    cout << "[OrderService] Created Order " << orderId << " for Quantity " << quantity << " And Item" << item << endl;
}