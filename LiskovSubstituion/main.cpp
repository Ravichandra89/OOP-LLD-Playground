#include "car.hpp";
#include "bicyle.hpp";
#include "EngineVehicle.hpp";
#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main() {
    vector<shared_ptr<Vehicle>> vehicles;

    vehicles.push_back(make_shared<Car>());
    vehicles.push_back(make_shared<Bicyle>());

    for (auto & it : vehicles) {
        it->move();


        if (auto engine = dynamic_pointer_cast<EngineVehicle>(it)) {
            engine->startEngine();
            engine->refule();
        }
    }

    return 0;
}