#ifndef DLP_CHECKER_HPP
#define DLP_CHECKER_HPP

#include "EmailFilter.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

class DLPChecker : public EmailFilter {
    protected : 
        bool processEmail (const Email & email) override {
            string lower_body = email.body;
            transform(lower_body.begin(), lower_body.end(), lower_body.begin(), ::tolower);

            if (lower_body.find("ssn") != string::npos || lower_body.find("credited") != string::npos) {
                cout << "[DLPChecker] Quarantining email from " << email.sender << " (sensitive data detected)\n";
                return true;
            }

            return false;
        }
};

#endif