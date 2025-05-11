#include "RealObject.hpp"
using namespace std;

// Concrete Real Object Code - Implementing methods and through the Proxy method appyling the validation

void RealObject::create(const string & key, const string & value) {
    store[key] = value;
}

string RealObject::get(const string & key) {
    auto it = store.find(key);
    if (it == store.end()) throw runtime_error("Key not found");
    return it->second;
}

void RealObject::remove(const string & key) {
    auto it = store.find(key);
    if (it == store.end()) throw runtime_error("Key not found for Deletion");
    store.erase(it);
}