#include "Directory.hpp"
#include <iostream>
using namespace std;

// Constructor Initialization
Directory::Directory(const string & name) : dirName(name) {};

// Methods
void Directory::print(int indent) const {
    cout << std::string(indent, ' ') << "[Dir]  " << dirName<< "\n";

    for (const auto & it : childrens) {
        it->print(indent + 2);
    }
}

// Size Method
size_t Directory::getSize() const {
    size_t totalSize = 0;
    for (const auto & it : childrens) {
        totalSize += it->getSize();
    }

    return totalSize;
}

// Add Method
void Directory::add(unique_ptr<INode> child) {
    childrens.push_back(move(child));
}