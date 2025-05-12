#include "PushNotifier.hpp"
#include <iostream>
using namespace std;

/**
 * PushNotifier Class Implementation
 * This class implements the INotifier interface for sending push notifications.
 */

void PushNotifier::notify(const string & receiver, const string & message) {
    cout << "Sending push notification to " << receiver << ": " << message << endl;
}