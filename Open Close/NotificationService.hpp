#ifndef NOTIFICATION_SERVICE_HPP
#define NOTIFICATION_SERVICE_HPP

#include "Notifier.hpp";
#include <vector>
#include <string>
#include <memory>

using namespace std;

class NotificationService {
    private: 
        vector<shared_ptr<Notifier>> notifiers;
    public: 

    void addNotifier(shared_ptr<Notifier> notifier);

    void notifyAll(const string & msg);
};

#endif