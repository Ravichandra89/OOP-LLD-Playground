#include "Pixel.hpp"
#include <iostream>
using namespace std;

// Impelement the core methods
string Pixel::getModel() const {
    return "Google Pixel Max10";
}

void Pixel::specs() const {
    cout << "Model: " << getModel() << " ,Display Size: 7.8-inch" << " ,FingerPrint" << " ,FaceLock" << endl;
}