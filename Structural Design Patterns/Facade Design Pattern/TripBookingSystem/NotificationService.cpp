#include "NotificationService.hpp"
#include <iostream>
using namespace std;

void NotificationService::sendNotification(const string & user, const string & message) {
    cout << "Notification to " << user << ": " << message << "\n";
}

