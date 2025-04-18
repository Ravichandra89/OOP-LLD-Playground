#include "orderService.hpp"
#include <iostream>
#include "../db/dbConnection.hpp"

using namespace std;

orderService::orderService(dbConnection &db) : db(db) {};

void orderService::getOrderById(int orderId)
{
    db.connect();
    string query = "SELECT * FROM orders WHERE id=" + to_string(orderId);
    db.execute(query);
};
