#include "NotificationSystem.hpp"
#include <iostream>
using namespace std;

// Methods Definition
void NotificationSystem::registerObserver(Observer* obs) {
    observers.push_back(obs);
}

void NotificationSystem::unregisterObserver(Observer* obs) {
    observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());
}

void NotificationSystem::notifyObservers() {
    for (const auto * it : observers) {
        it->update();
    }
}

string NotificationSystem::getUpdate() {
    return message;
}

void NotificationSystem::postMessage(const string & msg) {
    message = msg;
    notifyObservers();
}