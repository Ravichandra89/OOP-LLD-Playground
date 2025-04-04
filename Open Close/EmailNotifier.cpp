#include <iostream>
#include "EmailNotifier.hpp";
using namespace std;

void EmailNotifier::sendNotification(const string & msg) {
    cout << "Sending email notification: " << msg << endl;
};

