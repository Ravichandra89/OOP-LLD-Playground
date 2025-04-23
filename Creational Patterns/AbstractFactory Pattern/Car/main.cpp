#include <iostream>
#include "Headers/AbstractProducer.hpp"
using namespace std;

int main() {
    AbstractFactory* factory = AbstractProducer::getFactory(ECONOMIC);
    AbstractCar* car1 = factory->createCar(1);
    cout << car1->getDescription() << endl;

    // Clean up
    delete factory;
    delete car1;

    AbstractFactory* factory2 = AbstractProducer::getFactory(LUXURY);
    AbstractCar* car2 = factory2->createCar(2);
    cout << car2->getDescription() << endl;

    delete factory2;
    delete car2;

    return 0;
}