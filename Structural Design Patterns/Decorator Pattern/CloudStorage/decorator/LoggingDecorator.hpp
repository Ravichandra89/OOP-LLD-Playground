#ifndef Logging_Decorator_hpp
#define Logging_Decorator_hpp

#include "uploadDecorator.hpp"
#include <iostream>
#include <chrono>

using namespace std;

class LoggingDecorator : public UploadDecorator {
    public: 
        explicit LoggingDecorator(IUpload* uploader) : UploadDecorator(uploader) {};

        void upload(const string & data) override {
            auto start = chrono::steady_clock::now();
            cout << "[LOG] Starting upload..." << endl;
            UploadDecorator::upload(data);
            auto end = chrono::steady_clock::now();
            chrono::duration<double> elapsed = end - start;
            cout << "[LOG] Upload finished in " << elapsed.count() << "s\n";
        };
};

#endif