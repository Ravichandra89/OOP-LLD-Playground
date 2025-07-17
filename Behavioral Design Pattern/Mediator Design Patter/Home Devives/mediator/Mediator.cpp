#include "Mediator.hpp"
#include <iostream>
#include "../components/SmartDevice.hpp"
using namespace std;

// Concrete methods
void SmartHomeHub::registerDevice(SmartDevice *dvc)
{
    devices.push_back(dvc);
}

// Concrete notifyEvent Method
void SmartHomeHub::notifyEvent(SmartDevice *sender, const string &event)
{
    cout << "[Hub] Event from" << sender->getName() << ": " << event << endl;
    // send to all devices excluding the sender
    for (auto *it : devices)
    {
        if (it != sender)
        {
            it->receiveEvent(event);
        }
    }
}