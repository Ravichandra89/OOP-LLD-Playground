#ifndef Upload_Decorator_hpp
#define Upload_Decorator_hpp

#include "../component/IUpload.hpp"

class UploadDecorator : public IUpload {
    protected: 
        IUpload * up;
    public: 
        explicit UploadDecorator(IUpload * uploader) : up(uploader){};
        ~UploadDecorator() override {
            delete up;
        };

        void upload(const string & path) override {
            up->upload(path);
        }
};

#endif