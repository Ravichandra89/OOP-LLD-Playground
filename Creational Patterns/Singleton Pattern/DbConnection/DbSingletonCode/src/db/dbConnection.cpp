#include <iostream>
#include "dbConnection.hpp"
#include <string>
#include <mutex>

using namespace std;

// Initialize static members
dbConnection* dbConnection::dbInstance = nullptr;
int dbConnection::count = 0;
mutex dbConnection::mtx;

dbConnection::dbConnection(const string & url) : dbUrl(url) {
    count++;
    cout << endl;
    cout << "Database connection created. URL: " << dbUrl << endl << " Instance count : " << count<< endl;
};

// // Singleton locking logic
// dbConnection* dbConnection::getInstance(const string & url) {
//     mtx.lock();
//     if (dbInstance == nullptr) {
//         dbInstance = new dbConnection(url);
//     }
//     mtx.unlock();
//     return dbInstance;
// }

// Double locking 
dbConnection* dbConnection::getInstance(const string & url) {
    if (dbInstance == nullptr) {
        mtx.lock();
        if (dbInstance == nullptr) {
            dbInstance = new dbConnection(url);
        }
        mtx.unlock();
    }
    return dbInstance;
}

// Destructor
dbConnection::~dbConnection() {
    count--;
    cout << "Database connection destroyed. URL: " << dbUrl << " count: " << count<< endl;
};

// Connect method
void dbConnection::connect() {
    cout << "Connecting to database at: " << dbUrl << endl;
}

// Execute query method
void dbConnection::executeQuery(const string & query) {
    cout << "Executing query: " << query << " on database at: " << dbUrl << endl;
}