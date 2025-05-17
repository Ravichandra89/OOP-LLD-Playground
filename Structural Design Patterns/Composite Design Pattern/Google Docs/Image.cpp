#include "Image.hpp"
#include <iostream>
using namespace std;

// Constructor
Image::Image(const string & path_) : imgPath(path_) {};

// Method Definition
void Image::render(int indent) const {
    cout << string(indent, ' ') << "[Image: " << imgPath << "]\n";
}

string Image::getText() const {
    return "[Image: " + imgPath + " ]";
}

int Image::wordCount() const {
    return 0; // There is no wordcount for image
}

vector<const IGoogleDocument*> Image::search(const string & keyword) const {
    return {};
}


