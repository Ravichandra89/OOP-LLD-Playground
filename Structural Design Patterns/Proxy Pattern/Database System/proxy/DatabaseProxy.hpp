#ifndef DATABASE_PROXY_HPP
#define DATABASE_PROXY_HPP

#include "../core/IDatabase.hpp"

#include <unordered_map>
#include <string>
#include <memory>

using namespace std;

enum class Role {Admin, User, Guest};

class DatabaseProxy : public IDatabase {
        Role role;
        unique_ptr<IDatabase> database;
        unordered_map<string, string> cache;

        void authorize(const string & op) const;
        
    public: 
        DatabaseProxy(Role r, unique_ptr<IDatabase> db);
        void create(const string & key, const string & value) override;
        string get(const string & key) override;
        void remove(const string & key) override;
};
#endif