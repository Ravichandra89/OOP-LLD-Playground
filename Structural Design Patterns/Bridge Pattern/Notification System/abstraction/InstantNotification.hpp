#ifndef INSTANT_NOTIFICATION_HPP
#define INSTANT_NOTIFICATION_HPP

#include "Notification.hpp"
#include "../implementor/Notifier.hpp"
#include <string>
using namespace std;

/**
 * InstantNotification Class
 * This class represents an instant notification system that uses a notifier to send notifications.
 */

class InstantNotification : public INotification {
    public: 
        InstantNotification(INotifier* notifier);
        void send(const string & receiver, const string & message) override;
};

#endif