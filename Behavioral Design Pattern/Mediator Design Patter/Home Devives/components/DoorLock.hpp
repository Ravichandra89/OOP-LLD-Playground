#ifndef CONCRETE_DOOR_LOCK_HPP
#define CONCRETE_DOOR_LOCK_HPP

#include "SmartDevice.hpp"
#include <iostream>
using namespace std;

class Doorlock : public SmartDevice {
    public : 
        // Constructor
        Doorlock(const string& name, SmartHomeHub* hub) : SmartDevice(name, hub) {}

        // ReceiveEvent Method
        void receiveEvent(const string& event) {
            if (event == "LightOn") {
                cout << getName() << ": light turned on, unlocking door" << endl;
            }
        }

        // Lock Method
        void lock() {
            cout << getName() << ": Door Locked" << endl;
            sendEvent("Doorlocked");
        }
};

#endif