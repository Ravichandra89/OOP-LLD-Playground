/**
 * Notification Service 
 */

#ifndef NOTIFICATION_SERVICE_HPP
#define NOTIFICATION_SERVICE_HPP

#include <string>
using namespace std;

class NotificationService {
    public :
        NotificationService() = default;
        void notify(int orderId, const string & message);
};

#endif