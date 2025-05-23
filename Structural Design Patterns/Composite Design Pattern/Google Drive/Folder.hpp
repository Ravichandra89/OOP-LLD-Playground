#ifndef COMPOSITE_PATTERN_LEAF_FOLDER_HPP
#define COMPOSITE_PATTERN_LEAF_FOLDER_HPP

#include "GoogleDrive.hpp"
#include <string>
#include <memory>
#include <vector>
using namespace std;

class Folder  : public GoogleDrive {
        string folderName;
        vector<unique_ptr<GoogleDrive>> childrens;
    
    public: 
        Folder(const string & name_);
        void add (unique_ptr<GoogleDrive> component);

        void show(int indent = 0) const override;
        size_t getSize() const override;
};

#endif