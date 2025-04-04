#include "NotificationService.hpp";
#include "EmailNotifier.hpp";
#include "SMSNotifier.hpp";
#include <memory>

using namespace std;

int main() {
    // create the service instance
    NotificationService ns;

    ns.addNotifier(make_shared<EmailNotifier>());
    ns.addNotifier(make_shared<SMSNotifier>());

    ns.notifyAll("Your order has been shipped");
}
