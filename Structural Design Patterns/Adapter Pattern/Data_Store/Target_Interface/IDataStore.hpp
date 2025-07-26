#ifndef IDATA_STORE_HPP
#define IDATA_STORE_HPP

#include <string>
using namespace std;

class IDataStore {
    public: 
        virtual ~IDataStore() = default;
        virtual string get(const string& key) = 0;
        virtual void put(const string& key, const string& value) = 0;
};

#endif