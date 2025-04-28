#include "GamingComputer.hpp"
#include <iostream>
#include "../product/Computer.hpp"
using namespace std;

GamingComputer::GamingComputer() {
    cp = new Computer();
};

// Implementing the Methods
GamingComputer::~GamingComputer() {
    delete cp;
}

void GamingComputer::buildCpu() {
    cp->setCPU("Intel Core i9-13900K");
}

void GamingComputer::buildRam() {
    cp->setRAM("32GB DDR5");
};

void GamingComputer::buildStorage() {
    cp->setStorage("2TB NVMe SSD");
};

Computer* GamingComputer::getResult() {
    return cp;
}



