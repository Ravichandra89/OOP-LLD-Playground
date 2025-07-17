#ifndef CONCRETE_COLLEGAGUES_COMPONENT_HPP
#define CONCRETE_COLLEGAGUES_COMPONENT_HPP

#include "./SmartDevice.hpp"

class Light : public SmartDevice {
    public : 
        // Constructor 
        Light(const string& name, SmartHomeHub* hub) : SmartDevice(name, hub) {};

        // ReceiveEvent
        void receiveEvent(const string& event) {
            if (event == "MotionDetected") {
                cout << getName() << ": Motion detected, turning On light" << endl;
            }
        }

        // TurnOn Light
        void switchOn() {
            sendEvent("Light On");
        }
};

#endif