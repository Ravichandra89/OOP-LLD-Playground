/***
 * Notification E commerce Sub System - 
 *  - sendNotificaton(...)
 */

#ifndef NOTIFICAION_SYSTEM_HPP
#define NOTIFICATION_SYSTEM_HPP

#include <iostream>
using namespace std;

class Notification {
    public: 
        Notification() = default;
        void sendNotification(const string & userToken, const string & message);
};

#endif