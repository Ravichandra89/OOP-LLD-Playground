/**
 * File class header file
 * Implementing the Interface_node methods
 */

#ifndef FILE_SYSTEM_COMPOSITE_FILE_HPP
#define FILE_SYSTEM_COMPOSITE_FILE_HPP

#include "INode.hpp"
#include <string>
using namespace std;

class File : public INode {
        string fileName;
        size_t fileSize;

    public: 
        // File class Constructor 
        File(const string &name, size_t size);
        void print(int indent = 0) const override;
        size_t getSize() const override;
};

#endif