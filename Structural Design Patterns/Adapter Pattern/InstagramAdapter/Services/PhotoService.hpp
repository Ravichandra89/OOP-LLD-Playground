#ifndef PHOTO_SERVICE_HPP
#define PHOTO_SERVICE_HPP

#include "../cloudProviders/IStorage.hpp"
#include <string>

class PhotoService {
        IStorage * stg;
    public: 
        PhotoService(IStorage* storage);
        string uploadPhoto(const string & imagePath);
};

#endif