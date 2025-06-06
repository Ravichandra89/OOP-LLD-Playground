#ifndef PHISING_URL_HPP
#define PHISING_URL_HPP

#include "EmailFilter.hpp"
#include <iostream>
using namespace std;

class PhisingUrl : public EmailFilter {
    protected : 
        bool processEmail(const Email & email) override {
            string lower_body = email.body;

            if (lower_body.empty()) {
                cout << "Email has no Body!" << endl;
            }

            transform(lower_body.begin(), lower_body.end(), lower_body.begin(), ::tolower);

            // Check if Any Phising Url the body has or not
            if (lower_body.find("http://") != string::npos && lower_body.find("https://") != string::npos) {
                cout << "[PhisingDetector] Blocking email for" << email.sender << "(possible phishing URL found)" << endl;
                return true;
            }
            return false;
        }
};
#endif