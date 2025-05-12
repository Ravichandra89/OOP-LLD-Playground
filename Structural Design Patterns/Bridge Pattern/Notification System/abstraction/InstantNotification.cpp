#include "InstantNotification.hpp"
#include <iostream>
using namespace std;

/**
 * Constructor Intilization
 */

InstantNotification::InstantNotification(INotifier* notifier) : INotification(notifier) {};

// Method to send an instant notification
void InstantNotification::send(const string & receiver, const string & message) {
    cout << "Sending instant notification..." << endl;
    notifier->notify(receiver,"[URGENT]" + message);
}