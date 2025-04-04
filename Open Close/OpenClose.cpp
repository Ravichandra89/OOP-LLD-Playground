#include<iostream>
#include<vector>
using namespace std;

// Make the Notification Interface
class Notifier {
    public: 
        virtual void sendNotification(const string & msg) = 0;
        virtual ~Notifier() {};
};

class SMSNotification : public Notifier {
    public: 
        void sendNotification(const string & msg) override {
            cout << "Sending SMS Notification" << endl;
        }
};

class EmailNotification : public Notifier {
    public: 
        void sendNotification(const string & msg) override {
            cout << "Sending Email Notification" << endl;
        }
};

// Writting the Notification Service
class notificationService{
    private: 
        vector<shared_ptr<Notifier>> notifiers;
    public: 
        void addNotification(shared_ptr<Notifier> notifi){
            notifiers.push_back(notifi);
        }

        // NotifyAll Registered channels
        void notifyAll(const string & msg) {
            for (auto & it : notifiers) {
                it->sendNotification(msg);
            }
        }
};

int main() {
    // Create a notification service
    notificationService ns;
    
    // Create a SMS and Email Notifier
    ns.addNotification(make_shared<EmailNotification>());
    ns.addNotification(make_shared<SMSNotification>());

    // Send notification to all channels
    ns.notifyAll("Hello, World!");
    return 0;
}
