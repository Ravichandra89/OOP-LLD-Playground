#ifndef FLOOR_PANEL_HPP
#define FLOOR_PANEL_HPP

#include <iostream>
#include <string>
#include "../mediator/controleSystem.hpp"

using namespace std;

class FloorPanel
{
private:
    int floorNumber;
    ControleSystem *controle;

public:
    FloorPanel(int floorNumber, ControleSystem *controle) : floorNumber(floorNumber), controle(controle) {}

    // Method to up button pressed handler
    void pressUp()
    {
        cout << "Up button pressed on floor " << floorNumber << endl;
        controle->requestPickup(floorNumber, true);
    }

    void pressDown() {
        cout << "Down button pressed on floor " << floorNumber << endl;
        controle->requestPickup(floorNumber, false);
    }
};

#endif