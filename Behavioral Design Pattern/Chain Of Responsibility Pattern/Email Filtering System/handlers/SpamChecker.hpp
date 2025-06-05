#ifndef SPAM_CHECKER_HPP
#define SPAM_CHECKER_HPP

#include "EmailFilter.hpp"
#include <iostream>

using namespace std;

class SpamChecker : public EmailFilter {
    protected : 
        bool processEmail(const Email & email) override {
            string lower_body = email.body;
            string lower_subject = email.subject;

            transform(lower_subject.begin(), lower_subject.end(), lower_subject.begin(), ::tolower);

            transform(lower_body.begin(), lower_body.end(), lower_body.begin(), ::tolower);

            if (lower_subject.find("free money") != string::npos || lower_body.find("make money fast") != string::npos) {

                cout << "[Spam Checker] Marking as SPAM: " << email.sender << endl;
                return true;
            } 
            return false;
        }
};

#endif