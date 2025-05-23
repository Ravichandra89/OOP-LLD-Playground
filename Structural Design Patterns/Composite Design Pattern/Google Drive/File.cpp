#include "File.hpp"
#include <iostream>
using namespace std;

// Constructor Definition
File::File(const string & name_, size_t size_) : fileName(name_), size(size_){};

void File::show(int indent) const {
    cout << string(indent, ' ') << "- File: " << fileName << " (" << size << "KB)" << endl;
}

size_t File::getSize() const {
    return size;
}