/**
 * Real Object Header File
 */

#ifndef REAL_OBJECT_HPP
#define REAL_OBJECT_HPP

#include "IDatabase.hpp"
#include <unordered_map>

using namespace std;

class RealObject : public IDatabase {
        // <key, value> Databae
        unordered_map<string, string> store;
    public: 
        void create(const string & key, const string & value) override;
        string get(const string & key) override;
        void remove(const string & key) override;
};


#endif