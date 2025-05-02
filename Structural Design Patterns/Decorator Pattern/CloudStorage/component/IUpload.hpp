#ifndef IUpload_hpp
#define IUpload_hpp

#include <string>
using namespace std;

class IUpload {
    public: 
        virtual void upload(const string & path) = 0;
        virtual ~IUpload() = default;
};

#endif