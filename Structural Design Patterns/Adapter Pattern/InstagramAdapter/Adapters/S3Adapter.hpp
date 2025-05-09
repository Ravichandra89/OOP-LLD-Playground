#ifndef S3_ADAPTER_HPP
#define S3_ADAPTER_HPP

/**
 * Interface for
 */

#include "../cloudProviders/IStorage.hpp"
#include "../cloudProviders/awsS3Provider.hpp"

class S3Adapter : public IStorage {
    private: 
        AwsS3 aws;
        string bucketName;
    public: 
        // constructor
        S3Adapter(const string & bucketName);
        string upload(const string & imagePath) override;
};

#endif