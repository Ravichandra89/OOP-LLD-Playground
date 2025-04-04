#include "NotificationService.hpp";
#include "Notifier.hpp";

void NotificationService::addNotifier(shared_ptr<Notifier> notifier)
{
    notifiers.push_back(notifier);
}

void NotificationService::notifyAll(const string & msg) {
    for (auto & it : notifiers) {
        it->sendNotification(msg);
    }
}