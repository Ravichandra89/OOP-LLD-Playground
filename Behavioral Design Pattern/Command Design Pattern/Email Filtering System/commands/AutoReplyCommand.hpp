#ifndef AUTO_REPLY_COMMAND_HPP
#define AUTO_REPLY_COMMAND_HPP

#include <iostream>
#include "ICommand.hpp"
using namespace std;

class AutoReply : public ICommand {
    public : 
        void execute(Email & mail) override {
            if (!mail.is_Spam || !mail.is_Virus) {
                mail.replied = true;
                cout << "[AutoReply] Sent out-of-office reply." << endl;
            } else {
                cout << "[AutoReply] Skipped due to spam/virus." << endl;
            }
        }
};

#endif