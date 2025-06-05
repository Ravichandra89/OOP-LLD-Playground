#ifndef VIRUS_SCANNER_HPP
#define VIRUS_SCANNER_HPP

#include "EmailFilter.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

class VirusScanner : public EmailFilter {
    protected : 
        bool processEmail(const Email& email) override  {
            string lowerBody = email.body;
            // transform(lowerBody.begin(), lower_body.end(), lower_body.begin(), ::tolower);

            if (lowerBody.find("virus") != string::npos) {
                cout << "[Virus Scanner] Quarantining email from " << email.sender << "(\"virus\" found in body)\n";
                return true;
            }

            for (const auto & att : email.attachments) {
                string lowerAtt = att;
                if (lowerAtt.size() > 4 && lowerAtt.substr(lowerAtt.size() - 4) == ".exe") {
                    cout << "[VirusScanner] Quarantining email from " << email.sender
                          << " (executable attachment: " << att << ")" << endl;
                    
                    return true;
                }
            }

            return false;
        }
};

#endif