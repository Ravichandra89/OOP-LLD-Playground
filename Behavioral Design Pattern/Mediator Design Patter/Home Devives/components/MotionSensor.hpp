#ifndef CONCRETE_MOTION_SENSOR_HPP
#define CONCRETE_MOTION_SENSOR_HPP

#include "SmartDevice.hpp"
#include <iostream>
using namespace std;

class MotionSensor : public SmartDevice
{
public:
    // Constructor
    MotionSensor(const string &name, SmartHomeHub *hub) : SmartDevice(name, hub) {}

    // Receiver method
    void receiveEvent(const string &event)
    {
    }

    // Own method DetectMotion
    void detectMotion()
    {
        cout << getName() << ": Motion detected!" << endl;
        sendEvent("MotionDetected");
    }
};

#endif