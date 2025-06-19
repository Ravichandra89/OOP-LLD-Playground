#include <iostream>
#include <memory>

#include "commands/ICommand.hpp"
#include "commands/SpamFilterCommand.hpp"
#include "commands/VirusFilterCommand.hpp"
#include "commands/AutoReplyCommand.hpp"

// Invoker
#include "Invoker/Invoker.hpp"

using namespace std;

int main() {
    // Email Format
    Email mail;
    mail.sender = "ravi@gmail.com";
    mail.subject = "You won a lottery!";
    mail.body = "Congratulations! You win money. Click to claim your malware prize!";

    Invoker inv;
    inv.addFilter(make_unique<SpamFilterCommand>());
    inv.addFilter(make_unique<VirusFilter>());
    inv.addFilter(make_unique<AutoReply>());

    // Process the filters
    inv.process(mail);
    mail.printEmail();
}