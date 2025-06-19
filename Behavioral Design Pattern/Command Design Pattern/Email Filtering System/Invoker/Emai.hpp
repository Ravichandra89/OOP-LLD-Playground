// Format of Email
#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <iostream>
using namespace std;

class Email {
    // Properties of the Email
        string sender;
        string receiver;
        string body;
        bool is_Spam = false;
        bool is_Virus = false;
        bool replied = false;

    public : 
        // Printing the information
        void printEmail() {
            cout << "Sender Name: " << sender << endl;
            cout << "Receiver Name: " << receiver << endl;
            cout << "Email Body: " << body << endl;
            cout << "IsSpam: " << (is_Spam ? "Yes" : "No") << endl;
            cout << "IsVirus: " << (is_Virus ? "Yes" : "No") << endl;
            cout << "AutoReplied " << (replied ? "Yes" : "No") << endl;
        }
};

#endif