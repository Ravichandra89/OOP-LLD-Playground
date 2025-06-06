#ifndef ATTACHEMENT_POLICY_HPP
#define ATTACHEMENT_POLICY_HPP

#include "EmailFilter.hpp"
#include <iostream>

using namespace std;

class AttachementPolicy : public EmailFilter {
    protected : 
        bool processEmail(const Email & email) override {
            bool forbiddenFound = false;
            
            for (const auto & it : email.attachments) {
                string lower_att = it;
                transform(lower_att.begin(), lower_att.end(), lower_att.begin(), ::tolower);

                if (lower_att.size() > 4 && (lower_att.substr(lower_att.size() - 4) == ".exe" || lower_att.substr(lower_att.size() - 4) == ".bat")) {
                    cout << "[AttachmentPolicyEnforcer]  Stripping forbidden attachment: " << it << endl;
                    forbiddenFound = true;
                }
            }

            // If Forbidden got true 
            if (forbiddenFound) {
                cout << "[AttachmentPolicyEnforcer] Email Form" << email.sender << "continues after stripping." << endl;
                return false;
            }
            
            return true;
        }
};

#endif