#ifndef CompressDecorator_hpp
#define CompressDecorator_hpp

#include "uploadDecorator.hpp"
#include <iostream>

class CompressDecorator : public UploadDecorator {
    public: 
        explicit CompressDecorator(IUpload* uploader) : UploadDecorator(uploader){};

        void upload(const string & path) override {
            string compressed = "[cmp]" + path + "[/cmp]";
            cout << "Compressing Data " << endl;
            UploadDecorator::upload(compressed);
        }
};

#endif