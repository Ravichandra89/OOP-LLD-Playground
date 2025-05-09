#ifndef GOOGLE_PROVIDER_HPP
#define GOOGLE_PROVIDER_HPP

#include <string>
#include <iostream>
using namespace std;

class GoogleProvider
{
public:
    string uploadObject(const string &bucketName, const string &objectName, const string &file)
    {
        cout << "[Google] Uploading " << file << " to bucket " << bucketName << " as object " << objectName << endl;
        return "https://storage.googleapis.com/" + bucketName + "/" + objectName;
    }
};

#endif