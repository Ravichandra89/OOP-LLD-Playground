#ifndef CAR_PANEL_HPP
#define CAR_PANEL_HPP

#include <iostream>
#include <string>
#include "../mediator/controleSystem.hpp"

using namespace std;

class CarPanel {
    private: 
        int carId;
        ControleSystem * controle;

    public:
        // Constructor 
        CarPanel(int carId, ControleSystem * controle) : carId(carId), controle(controle) {}

        // Method to select a floor
        void selectFloor(int floor) {
            controle->requestDropOff(carId, floor);
        }
        
};

#endif