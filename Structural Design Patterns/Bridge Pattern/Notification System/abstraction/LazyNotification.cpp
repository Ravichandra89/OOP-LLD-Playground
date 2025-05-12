#include "LazyNotification.hpp"
#include <iostream>
using namespace std;

/**
 * LazyNotification Class Implementation
 * This class implements the INotification interface for sending lazy notifications.
 */

LazyNotification::LazyNotification(INotifier* notifier) : INotification(notifier) {};

void LazyNotification::send(const string & receiver, const string & message) {
    cout << "Scheduling notification for later..." << endl;
    notifier->notify(receiver,"[LAZY]" + message);
}