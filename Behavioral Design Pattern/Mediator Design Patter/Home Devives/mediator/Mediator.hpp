/**
 * 
 * Home Automation Device Controller - SmartHomeHub
 * Methods : 
 *  - registerDevice
 *  - notifyEvent 
 * 
 * Attributes: 
 *  pvt : devices
 */
#ifndef SMART_HOME_HUB_HPP
#define SMART_HOME_HUB_HPP

class SmartDevice;

#include <iostream>
#include <vector>
using namespace std;

class SmartHomeHub {
    private: 
        vector<SmartDevice*> devices;

    public: 
        virtual ~SmartHomeHub() = default;
        virtual void registerDevice(SmartDevice* dvc) = 0;
        virtual void notifyEvent(SmartDevice* sender, const string& event) = 0;
};

#endif