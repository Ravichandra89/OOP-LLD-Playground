#include "AzureAdapter.hpp"
#include <iostream>

using namespace std;

// Azure Adapter Constructor
AzureAdapter::AzureAdapter(const string & container) : containerName(container) {};

// Upload Method
string AzureAdapter::upload(const string & imagePath) {
    string blobName = "img_" + std::to_string(std::hash<std::string>{}(imagePath));

    return asdk.uploadBlob(containerName, blobName, imagePath);
}

