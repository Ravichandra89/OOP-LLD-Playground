#include "DatabaseProxy.hpp"
#include <memory>
using namespace std;

DatabaseProxy::DatabaseProxy(Role r, std::unique_ptr<IDatabase> db)
    : database(std::move(db)), role(r) {}

void DatabaseProxy::authorize(const string & op) const {
    switch(role) {
        case Role::Admin:
            return;

        case Role::User:
            if (op == "create" || op == "get") return ;
            break;
        case Role::Guest:
            if(op == "get") return;
            break;
    }
    throw runtime_error("Access denied for operation" + op);
}

void DatabaseProxy::create(const string & key, const string & value) {
    authorize("create");
    database->create(key, value);
    // Maintain the cache
    cache[key] = value;
};

string DatabaseProxy::get(const string & key) {
    authorize("get");
    auto it = cache.find(key);
    if (it != cache.end()) return it->second;
    string val = database->get(key);
    cache[key] = val;
    return val;
};

void DatabaseProxy::remove(const string & key) {
    authorize("remove");
    database->remove(key);
    cache.erase(key);
};