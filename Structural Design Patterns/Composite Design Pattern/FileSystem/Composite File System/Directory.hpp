/**
 * Header File For Directory class
 * Implementing the INode Interface methods
 */

#ifndef FILE_SYSTEM_COMPOSITE_DIRECTORY_HPP
#define FILE_SYSTEM_COMPOSITE_DIRECTORY_HPP

#include "INode.hpp"
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Directory : public INode {
        string dirName;
        vector<unique_ptr<INode>> childrens;
    
    public: 
        // Directory class Constructor
        Directory (const string & name);
        void print(int indent = 0) const override;
        size_t getSize() const override;

        void add(unique_ptr<INode> child);
};

#endif