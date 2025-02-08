#include <iostream>
using namespace std;

class INotifier
{
public:
    virtual bool sendNotification(string message) = 0;
    virtual ~INotifier() {}
};

class EmailNotification : public INotifier
{
public:
    bool sendNotification(const string message) override
    {
        cout << "Sending email notification: " << message << endl;
        return true;
    }
};

class SMSNotification : public INotifier
{
public:
    bool sendNotification(const string message) override
    {
        cout << "Sending SMS notification: " << message << endl;
        return true;
    }
};

class NotificationManager  
{
private:
    INotifier *notifier;

public:
    NotificationManager(INotifier *notifier)
    {
        this->notifier = notifier;
    }

    void notify(string message)
    {
        notifier->sendNotification(message);  
    }
};

int main()
{
    INotifier *noty = new EmailNotification();  
    NotificationManager emailManager(noty);    
    emailManager.notify("Hello, Bhai!");

    delete noty; 
}
