#ifndef CONCRETE_COLLEAGUE_THERMOSTAT_HPP
#define CONCRETE_COLLEAGUE_THERMOSTAT_HPP

#include "SmartDevice.hpp"
#include <iostream>

using namespace std;


class Thermostat : public SmartDevice {
    public :
        // Constructor
        Thermostat(const string & name, SmartHomeHub* hub) : SmartDevice(name, hub) {}

        // ReceiveEvent
        void receiveEvent(const string & event) {
            if (event == "MotionDetected") {
                cout << getName() << ": Adjusting Temprature to" << endl;
            }
        }

        // Adjusting Temprature
        void adjustTemprature(int temp) {
            cout << getName() << ": Motion detected, setting confortable temperature" << temp << endl;
            sendEvent("SetTemperature");
        }
};

#endif