/**
 * Composite File System
 * Common Interface for the File and Directory classes 
 * to implement the Composite Design Pattern.
 */

#ifndef FILE_SYSTEM_COMPOSITE_INODE_HPP
#define FILE_SYSTEM_COMPOSITE_INODE_HPP

#include <string>

class INode {
    virtual ~INode() = default;
    virtual void print(int indent = 0) const = 0;
    virtual size_t getSize() const = 0;
};

#endif