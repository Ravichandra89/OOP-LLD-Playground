#include "dbConnection.hpp"
#include <iostream>
using namespace std;

int dbConnection::count = 0;

dbConnection::dbConnection(const string& url) : url(url) {
    count++;
    cout << "Creating connection to " << url << " | Instance Count: " << count << endl;
}

dbConnection::~dbConnection() {
    count--;
    cout << "Destroying connection to " << url << " | Remaining Instances: " << count << endl;
}

void dbConnection::connect() {
    cout << "Connecting to DB at: " << url << endl;
}

void dbConnection::execute(const string& query) {
    cout << "Executing: " << query << endl;
}
