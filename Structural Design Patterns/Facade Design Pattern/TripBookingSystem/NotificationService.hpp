/***
 * Notification Service Sub System - 
 * sendNotification(...)
 */
#ifndef NOTIFICATION_SERVICE_HPP
#define NOTIFICATION_SERVICE_HPP

#include <string>
using namespace std;

class NotificationService {
    public: 
        void sendNotification(const string & user, const string & message);
};

#endif