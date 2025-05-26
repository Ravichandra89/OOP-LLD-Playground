#include "Notification.hpp"
#include <iostream>
using namespace std;

void Notification::sendNotification(const string & userToken, const string & message) {
    // Simulate sending a notification
    cout << "Sending notification to user: " << userToken << endl;
    cout << "Message: " << message << endl;
}