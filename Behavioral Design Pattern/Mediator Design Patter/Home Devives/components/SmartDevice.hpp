/**
 * Colleagues Interface - 
 *  - receiveEvent(event);
 *  - getName();
 *  - sendEvent()
 */

#ifndef SMART_DEVICES_COLLEGAGUES_INTERFACE_HPP
#define SMART_DEVICES_COLLEGAGUES_INTERFACE_HPP

#include <string>
#include "../mediator/Mediator.hpp"
using namespace std;

// Forward Declaration
class SmartHomeHub;

class SmartDevice {
    private: 
        string name;
        SmartHomeHub* controller;

    protected:
        // Sending Event Method
        void sendEvent(const string& event) {
            controller->notifyEvent(this, event);
        }

    public: 
        // Constructor
        SmartDevice(const string& name, SmartHomeHub* hub) : name(name), controller(hub){}

        virtual ~SmartDevice() = default;
        virtual void receiveEvent(const string& event) = 0;
        const string getName() const {
            return name;
        }
};

#endif