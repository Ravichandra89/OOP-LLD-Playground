/**
 * Common Interface for the Instagram Uploading post feature
 */

#ifndef ISTORAGE_HPP
#define ISTORAGE_HPP

#include <string>
using namespace std;

class IStorage {
    public: 
        virtual void upload(const string & imagePath) = 0;
        virtual ~IStorage() = default;
};

#endif