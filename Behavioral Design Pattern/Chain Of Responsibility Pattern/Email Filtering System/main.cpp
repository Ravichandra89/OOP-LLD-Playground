#include <iostream>
#include <vector>
#include <memory>

#include "handlers/Email.hpp"
#include "handlers/EmailFilter.hpp"
#include "handlers/SpamChecker.hpp"
#include "handlers/AttachementPolicy.hpp"
#include "handlers/DeliveryHandler.hpp"
#include "handlers/DLPChecker.hpp"
#include "handlers/PhisingUrl.hpp"
#include "handlers/VirusScanner.hpp"

using namespace std;

int main() {
    // Build the chain handlers instances
    auto virus = make_shared<VirusScanner> ();
    auto spamChecker = make_shared<SpamChecker> ();
    auto phising = make_shared<PhisingUrl> ();
    auto att = make_shared<AttachementPolicy> ();
    auto dlpChecker = make_shared<DLPChecker> ();
    auto delivery = make_shared<DeliveryHandler> ();

    //  build the chain of handlers
    virus->setNext(spamChecker);
    spamChecker->setNext(phising);
    phising->setNext(att);
    att->setNext(dlpChecker);
    dlpChecker->setNext(delivery);

    // Sample Raw Data 
    vector<Email> inbox = {
        // Clean email
        { "Team Lunch", 
          "Hey team, let's plan for lunch tomorrow at noon.", 
          "alice@example.com", 
          {} },
        
        // Email with virus keyword
        { "Urgent: virus alert", 
          "I think I found a virus in the code.", 
          "bob@example.com", 
          {} },
        
        // Email with executable attachment
        { "Run This Installer", 
          "Please run the attached file to update.", 
          "carol@example.com", 
          { "update_installer.exe", "readme.txt" } },
        
        // Spammy email
        { "Make Money Fast!", 
          "You can make money fast by clicking this link!", 
          "spammer@spam.com", 
          {} },
        
        // Phishing email with http:// but no https://
        { "Verify your account", 
          "Please visit http://bank.example.com to verify.", 
          "phisher@badguy.com", 
          {} },
        
        // DLP violation with SSN mention
        { "Employee Data", 
          "The employee SSN is 123-45-6789, keep this confidential.", 
          "dave@example.com", 
          {} }
    };

    for (const auto & email : inbox) {
        cout << "\n--- Processing incoming email from: " << email.sender << " ----/n" << endl;
        virus->handle(email);
    }

    return 0;
}