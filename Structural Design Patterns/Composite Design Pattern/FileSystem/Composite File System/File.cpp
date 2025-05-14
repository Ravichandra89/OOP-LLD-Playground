#include "File.hpp"
#include <string>
#include <iostream>

using namespace std;

// Constructor Initialization
File::File(const string &name, size_t size) : fileName(name), fileSize(size) {}

// Methods
void File::print(int indent) const {
    cout << std::string(indent, ' ')
         << "[File] " << fileName
         << " (" << fileSize << " bytes)\n";
}

size_t File::getSize() const {
    return fileSize;
}