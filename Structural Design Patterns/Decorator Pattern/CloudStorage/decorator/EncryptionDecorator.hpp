#ifndef Encryption_Decorator_hpp
#define Encryption_Decorator_hpp

#include "uploadDecorator.hpp"
#include <iostream>
using namespace std;

class EncryptionDecorator : public UploadDecorator {
    public: 
        explicit EncryptionDecorator(IUpload* uploader) : UploadDecorator(uploader){};
        
        void upload(const string & data) override {
            string encrypted = "[enc]" + data + "[/enc]";
            cout << "Encrypted Data " << endl;
            UploadDecorator::upload(encrypted);
        }
};

#endif