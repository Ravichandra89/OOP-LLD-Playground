#ifndef SPAM_FILTER_COMMAND_HPP
#define SPAM_FILTER_COMMAND_HPP

#include "ICommand.hpp"
#include <iostream>
using namespace std;

class SpamFilterCommand : public ICommand {
    public : 
        void execute(Email & email) override {
            // Check the email body first
            if (email.body.find("win money") != string::npos || email.body.find("lottry") != string::npos) {
                email.is_Spam = true;
                cout << "Email is Spam!" << endl;
            } else {
                cout << "Spam Filter is Passed" << endl;
            }
        } 
};


#endif