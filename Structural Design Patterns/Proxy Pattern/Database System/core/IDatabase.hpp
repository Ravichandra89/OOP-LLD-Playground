#ifndef IDATABASE_HPP
#define IDATABASE_HPP

/**
 * Interface for Database Operations 
 */

#include <string>
using namespace std;

class IDatabase {
    public: 
        virtual ~IDatabase() = default;
        virtual void create(const string & key, const string & value) = 0;
        virtual string get(const string & key) = 0;
        virtual void remove(const string & key) = 0;
};

#endif