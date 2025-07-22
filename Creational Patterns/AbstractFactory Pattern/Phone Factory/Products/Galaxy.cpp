#include "Galaxy.hpp"
#include <iostream>
using namespace std;

// Implementing the core Methods
string Galaxy::getModel() const {
    return "Galxy 15 Pro Max";
}

void Galaxy::specs() const {
    cout << "Model: " << getModel() << " ,DisplaySize: 10.5-inch" << " ,Dual Speaker" << " ,Foldable Mobile" << " ,130px Back Camera" << endl;
}