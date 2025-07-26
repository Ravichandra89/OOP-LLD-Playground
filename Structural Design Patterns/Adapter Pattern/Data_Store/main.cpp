#include "Adapter/MongoAdapter.hpp"
#include "Adapter/MySqlAdapter.hpp"
#include "Adapter/RedisAdapter.hpp"
#include "Target_Interface/IDataStore.hpp"

#include <iostream>
using namespace std;

int main() {
    IDataStore* store = new MySQLAdapter("server=127.0.0.1;db=test");
    store->put("foo", "bar");
    cout << "MySQL get: " << store->get("foo") << endl;
    delete store;

    // Using MongoDb
    IDataStore* mongo = new MongoAdapter("mongodb://localhost:27017");
    mongo->put("alpha", "beta");
    cout << "Mongo get: " << mongo->get("alpha") << endl;
    delete mongo;

    IDataStore* redis = new RedisAdapter("password123");
    redis->put("count", "13");
    cout << "Redis get: " << redis->get("count") << endl;
    delete redis;
}