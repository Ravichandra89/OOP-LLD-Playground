#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <vector>

using namespace std;

struct Order {
    int orderId;
    string customerName;
    vector<string> items;
    double amount;
    bool isPaid;
    bool isFraudulent;
    bool shiped;

    Order (int orderId, const string & name, const vector<string>& itemList, double amount) : orderId(orderId), customerName(name), items(itemList), amount(amount), 
    isPaid(false), isFraudulent(false), shiped(false) {};
};

#endif