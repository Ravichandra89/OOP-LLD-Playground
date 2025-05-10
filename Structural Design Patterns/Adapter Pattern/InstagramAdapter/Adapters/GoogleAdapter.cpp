#include "GoogleAdapter.hpp"
#include <iostream>
using namespace std;

GoogleAdapter::GoogleAdapter(const string &bucket) : bucketName(bucket) {};

// Method
string GoogleAdapter::upload(const string &imagePath)
{
    string objectName = "img_" + std::to_string(std::hash<std::string>{}(imagePath));

    return gsdk.uploadObject(bucketName, objectName, imagePath);
}