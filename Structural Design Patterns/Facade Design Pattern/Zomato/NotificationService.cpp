#include "NotificationService.hpp"
#include <iostream>
using namespace std;

void NotificationService::notify(int orderId, const string & message) {
    cout << "[Notification Service] Order " << orderId << " : " << message << endl;
}
