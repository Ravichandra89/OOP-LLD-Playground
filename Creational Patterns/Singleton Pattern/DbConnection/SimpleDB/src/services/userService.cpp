#include "userService.hpp"
#include <iostream>
using namespace std;

userService::userService(dbConnection &db) : db(db) {}

void userService::getUserById(int userId)
{
    db.connect();
    string query = "SELECT * FROM users WHERE id = " + to_string(userId);
    db.execute(query);
}
