#include "Folder.hpp"
#include <iostream>

Folder::Folder(const string & name_) : folderName(name_){};

void Folder::add(unique_ptr<GoogleDrive> component) {
    childrens.push_back(move(component));
}

void Folder::show(int indent ) const {
    cout << string(indent, ' ') << "[Folder] " << folderName << endl;
    for (const auto & it : childrens) {
        it->show(indent + 2);
    }
}

size_t Folder::getSize() const {
    size_t totalSize = 0;
    for (const auto & it : childrens) {
        totalSize += it->getSize();
    }
    return totalSize;
}