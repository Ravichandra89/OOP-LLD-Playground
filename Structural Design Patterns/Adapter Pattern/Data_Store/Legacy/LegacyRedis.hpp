#ifndef LEGACYREDIS_HPP
#define LEGACYREDIS_HPP

#include <string>
#include <iostream>
using namespace std;


class LegacyRedis {
public:
    void authorize(const string& auth) {
        cout << "Redis: Authorizing with " << auth << endl;
    }

    string getKey(const string& key) {
        cout << "Redis: GET " << key << endl;
        return "Redis_Value";
    }
    
    // to Save the data
    void setKey(const string& key, const string& value) {
        cout << "Redis: SET " << key << " = " << value << endl;
    }
};

#endif