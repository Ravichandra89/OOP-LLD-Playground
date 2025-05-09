#ifndef AZURE_ADAPTER_HPP
#define AZURE_ADAPTER_HPP

#include "../cloudProviders/IStorage.hpp"
#include "../cloudProviders/AzureProvider.hpp"

using namespace std;

class AzureAdapter : public IStorage {
        AzureProvider asdk;
        string containerName;
    public: 
        AzureAdapter(const string & containerName);
        string upload(const string & imagePath) override;
};

#endif