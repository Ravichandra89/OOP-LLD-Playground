#ifndef NOTIFIER_HPP
#define NOTIFIER_HPP

// Define the Interface for Notification system
#include<string>
using namespace std;

class Notifier {
    public: 
        virtual void sendNotification(const string & msg) = 0;
        virtual ~Notifier() {};
};

#endif