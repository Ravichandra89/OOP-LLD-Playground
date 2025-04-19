#include "orderRepository.hpp"
#include <iostream>
#include "../db/dbConnection.hpp"

using namespace std;

orderRepository::orderRepository(dbConnection* db) : db(db) {};

void orderRepository::getOrderById(int orderId) {
    cout << "Fetching order with Id: " << orderId << endl;
    string query = "Select * From orders where id = " + to_string(orderId);
    db->executeQuery(query);
}
