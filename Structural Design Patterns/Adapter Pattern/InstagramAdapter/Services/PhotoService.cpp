#include "PhotoService.hpp"
#include <iostream>

using namespace std;

PhotoService::PhotoService(IStorage* storage) : stg(storage){};

string PhotoService::uploadPhoto(const string & imagePath) {
    return stg->upload(imagePath);
};