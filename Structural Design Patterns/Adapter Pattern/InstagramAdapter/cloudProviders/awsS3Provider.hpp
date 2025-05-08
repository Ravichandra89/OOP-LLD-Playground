#ifndef AWS_S3_PROVIDER_HPP
#define AWS_S3_PROVIDER_HPP

#include <string>
#include <iostream>
using namespace std;

class AwsS3 {
    public: 
        string putObject(const string & bucketName, const string & key, const string & filePath) {
            cout << "[S3] Uploading..." << filePath << " to bucket " << bucketName << " With key " << key << endl;

            // Return back the public url
            return "https://s3.amazonaws.com/" + bucketName + "/" + key;
        }
};

#endif