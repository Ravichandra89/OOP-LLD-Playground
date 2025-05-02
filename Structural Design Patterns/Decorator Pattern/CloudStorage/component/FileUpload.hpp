#ifndef File_Upload_hpp
#define File_Upload_hpp

#include "IUpload.hpp"
#include <iostream>
using namespace std;

class FileUpload : public IUpload {
    private: 
        string endpoint;
    public: 
        explicit FileUpload(const string & dest) : endpoint(dest) {};

        void upload(const string & path) {
            cout << "Uploading raw data to " << endpoint << ": " << path << endl;
        }
};

#endif