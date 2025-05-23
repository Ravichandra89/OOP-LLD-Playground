/**
 * File - Leaf File 
 */

#ifndef COMPOSITE_PATTERN_LEAF_FILE_HPP
#define COMPOSITE_PATTERN_LEAF_FILE_HPP

#include "DriveComponent.hpp"
#include <string>

using namespace std;

class File : public GoogleDrive {
        string fileName;
        size_t size;
    
    public: 
        // Constructor for File Leaf
        File(const string & name_, size_t size);

        // Method to be override
        void show(int indent = 0) const override;
        size_t getSize() const override;
};

#endif