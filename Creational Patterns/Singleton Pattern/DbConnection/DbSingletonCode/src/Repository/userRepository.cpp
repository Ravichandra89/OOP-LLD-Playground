#include "userRepository.hpp"
#include <iostream>
#include "../db/dbConnection.hpp"

using namespace std;

userRepository::userRepository(dbConnection* db) : db(db) {};

void userRepository::getUserById(int userId) {
    cout << "Fetching user with Id: " << userId << endl;
    string query = "Select * From users where id = " + to_string(userId);
    db->executeQuery(query);
}

