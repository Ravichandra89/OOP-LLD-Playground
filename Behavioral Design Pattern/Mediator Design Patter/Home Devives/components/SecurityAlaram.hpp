#ifndef CONCRETE_SECURITY_ALARAM_HPP
#define CONCRETE_SECURITY_ALARAM_HPP

#include "SmartDevice.hpp"
#include <iostream>
using namespace std;

class SecurityAlaram : public SmartDevice {
    public : 
        SecurityAlaram(const string& name, SmartHomeHub* hub) : SmartDevice(name, hub) {}

        // Receive method
        void receiveEvent(const string& event) override {
            if (event == "Doorlocked") {
                cout << getName() << ": Door locked, arming security alaram." << endl;
            }
        }

        // triggerAlaram method
        void triggerAlaram() {
            cout << getName() << ": Triggering alaram." << endl;
            sendEvent("AlaramTriggered");
        }
};

#endif