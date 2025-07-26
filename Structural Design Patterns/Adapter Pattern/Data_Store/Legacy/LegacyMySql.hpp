#ifndef MYSQL_LEGACY_HPP
#define MYSQL_LEGACY_HPP

// connect, query, update

#include <string>
#include <iostream>
using namespace std;

class LegacyMySql {
    public: 
        void connect(const string& connectStr) {
            cout << "MySQL: Connecting with " << connectStr << endl;
        }
        
        string query(const string& sqlQuery) {
            cout << "MySQL: Executing Query " << sqlQuery << endl;
            return "MySQL Result";
        }

        void update(const string& sqlQuery) {
            cout << "MySQL: Executing update: " << sqlQuery << endl;
        }
};

#endif