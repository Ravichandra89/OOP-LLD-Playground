#ifndef REAL_OBJECT_HPP
#define REAL_OBJECT_HPP

// Database Interface
#include "IDatabase.hpp"

#include <string>
#include <unordered_map>

class RealObject : public IDatabase {
        unordered_map<string, string> store;
    public: 
        void create(const string & key, const string & value) override;
        string get(const string & key) override;
        void remove(const string & key) override;
};

#endif