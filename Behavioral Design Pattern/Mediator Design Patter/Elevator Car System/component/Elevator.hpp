/**
 * Elevator Component
 */
#ifndef ELEVATOR_COMPONENT_HPP
#define ELEVATOR_COMPONENT_HPP

#include <iostream>
#include "../mediator/controleSystem.hpp"
using namespace std;

class Elevator
{
private:
    int id;
    int currentFloor;
    ControleSystem *controle;

public:
    // Constructor
    Elevator(int id, ControleSystem *controle) : id(id), currentFloor(0), controle(controle) {};

    // Getters
    int getId() const
    {
        return id;
    }

    int getCurrentFloor() const
    {
        return currentFloor;
    }

    // Methods of Elevator Component
    void openDoor()
    {
        cout << "Elevator " << id << " door opened at floor " << currentFloor << endl;
        // Updating the car Status
        controle->updateCarStatus(id, "Door Opened");
    }

    void closeDoor()
    {
        cout << "Elevator " << id << " door closed at floor " << currentFloor << endl;
        controle->updateCarStatus(id, "Door Closed");
    }

    // moveTo - Method
    void moveTo(int floor)
    {
        cout << "Elevator " << id << " moving from floor " << currentFloor << " to floor " << floor << endl;
        currentFloor = floor;
        controle->updateCarStatus(id, "Moving to floor " + to_string(floor));
    }

    // Report Status
    void reportStatus()
    {
        cout << "Elevator " << id << " is currently at floor " << currentFloor << endl;
        controle->updateCarStatus(id, "At floor " + to_string(currentFloor));
    }
};

#endif