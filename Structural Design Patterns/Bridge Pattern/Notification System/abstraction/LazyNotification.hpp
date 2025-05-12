/***
 * Delay notification until the end of the program.
 */

#ifndef LAZY_NOTIFICATION_HPP
#define LAZY_NOTIFICATION_HPP

#include "Notification.hpp"

class LazyNotification : public INotification {
    public: 
        LazyNotification(INotifier* notifier);
        void send(const string & receiver, const string & message) override;
};

#endif