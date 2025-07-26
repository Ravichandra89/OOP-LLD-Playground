#ifndef LEGACY_MONGO_HPP
#define LEGACY_MONGO_HPP

#include <string>
#include <iostream>
using namespace std;

class LegacyMongo {
    public : 
        // Open method
        void open(const string& url) {
            cout << "Mongo: Opening DB " << url << endl;
        }

        string find(const string& collection, const string& filter) {
            cout << "Mongo: Finding in " << collection << " filter: " << filter << endl;
            return "Mongo_Result";
        }

        void save(const string& collection, const string& document) {
            cout << "Mongo: Saving to" << collection << " doc: " << document << endl;
        }
};

#endif