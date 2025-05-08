#ifndef AZURE_PROVIDER_HPP
#define AZURE_PROVIDER_HPP

#include <string>
#include <iostream>
using namespace std;

class AzureProvider {
    public: 
        string uploadBlob(const string & container, const string & blobName, const string & path) {
            cout << "[Azure] Uploading..." << path << " to container " << container << " With Blob Name " << blobName << endl;

            return "https://azure.blob.core.windows.net/" + container + "/" + blobName;
        }
};

#endif