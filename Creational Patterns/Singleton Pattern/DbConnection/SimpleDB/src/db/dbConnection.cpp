#include <iostream>
#include "dbConnection.hpp"
#include <string>

using namespace std;

int dbConnection::count = 0;

// Constructor Initialization
dbConnection::dbConnection(const string & url) : url(url) {
    count++;
    cout << "Creating connection to " << url << " and count of Instance: " << count << endl;
};


dbConnection::~dbConnection() {
    count--;
    cout << "Destroying connection to " << url << " and count of Instance: " << count << endl;
};

// Database connection function
void dbConnection::connect() {
    cout << "Connecting to database at " << url << endl;
}

// Executing query function
void dbConnection::execute(const string & query) {
    cout << "Executing query on database at " << query << endl;
}
