/***
 * Push Notification Implementor Header File
 */
#ifndef PUSH_NOTIFIER_HPP
#define PUSH_NOTIFIER_HPP

#include "Notifier.hpp"
#include <iostream>
using namespace std;

class PushNotifier : public INotifier {
    public: 
        void notify(const string & receiver, const string & message) override;
};

#endif