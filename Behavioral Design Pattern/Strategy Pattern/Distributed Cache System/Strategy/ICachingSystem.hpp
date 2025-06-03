#ifndef INTERFACE_DISTRIBUTED_CACHING_SYSTEM_HPP
#define INTERFACE_DISTRIBUTED_CACHING_SYSTEM_HPP

#include <iostream>
#include <string>
using namespace std;


class ICacheStrategy {
    public : 
        virtual void onGet(const string & key) = 0;
        virtual void onPut(const string & key) = 0;
        virtual void onRemove(const string & key) = 0;
        virtual string evictKey() = 0;

        // Destructor 
        virtual ~ICacheStrategy() = default;
};

#endif