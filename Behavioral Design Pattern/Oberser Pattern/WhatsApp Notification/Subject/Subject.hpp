#ifndef WHATSAPP_SYSTEM_NOTIFICATION_SYSTEM_HPP
#define WHATSAPP_SYSTEM_NOTIFICATION_SYSTEM_HPP

#include <iostream>
using namespace std;

class Observer;

class Subject {
    public: 
        virtual void registerObserver(Observer* obs) = 0;
        virtual void unregisterObserver(Observer* obs) = 0;
        virtual void notifyObservers() = 0;
        virtual string getUpdate() = 0;
        virtual void postMessage(const string & message) = 0;

};

#endif