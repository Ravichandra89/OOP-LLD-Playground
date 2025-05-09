#include "S3Adapter.hpp"
#include "../cloudProviders/IStorage.hpp"
#include <iostream>

S3Adapter::S3Adapter(const string &bucket) : bucketName(bucket) {};

// Upload Method
string S3Adapter::upload(const string &imagePath)
{
    string key = "img_" + std::to_string(std::hash<std::string>{}(imagePath));
    return aws.putObject(bucketName, key, imagePath);
}

