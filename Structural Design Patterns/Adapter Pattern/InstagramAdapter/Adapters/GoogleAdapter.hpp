#ifndef GOOGLE_ADAPTER_HPP
#define GOOGLE_ADAPTER_HPP

#include "../cloudProviders/IStorage.hpp"
#include "../cloudProviders/GoogleProvider.hpp"
#include <string>
using namespace std;

class GoogleAdapter : public IStorage {
        GoogleProvider gsdk;
        string bucketName;
    public: 
        GoogleAdapter(const string & bucketName);
        string upload(const string & imagePath) override;
};

#endif