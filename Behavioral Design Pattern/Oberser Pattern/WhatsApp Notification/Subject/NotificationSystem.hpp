#ifndef NOTIFICATION_SYSTEM_CONCRETE_OBSERVER_HPP
#define NOTIFICATION_SYSTEM_CONCRETE_OBSERVER_HPP

#include "Subject.hpp"
#include <string>
#include <vector>
using namespace std;

class Observer;

class NotificationSystem : public Subject {
        vector<Observer*> observers;
        string message;
    
    public:     
        void registerObserver(Observer* obs) override;
        void unregisterObserver(Observer* obs) override;
        void notifyObservers() override;
        string getUpdate() override;
        void postMessage(const string & msg) override;
};

#endif