#include "Computer.hpp"
#include <iostream>
#include <string>
using namespace std;

void Computer::setCPU(const string & cpu) {
    this->cpu = cpu;
}

void Computer::setRAM(const string & ram) {
    this->ram = ram;
}

void Computer::setStorage(const string & storage) {
    this->storage = storage;
}

void Computer::displayInfo() const {
    cout << "CPU : " << cpu << endl;
    cout << "RAM: " << ram << endl;
    cout << "Storage: " << storage << endl;
}
