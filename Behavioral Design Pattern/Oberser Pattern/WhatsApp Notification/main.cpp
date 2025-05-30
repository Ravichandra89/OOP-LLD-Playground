#include "Subject/NotificationSystem.hpp"
#include "Observer/ObserverSubscriber.hpp"

int main() {
    NotificationSystem notify;

    ObserverSubscriber alice("Alice");
    ObserverSubscriber bob("Bob");
    ObserverSubscriber charlie("Charlie");

    alice.setSubject(&notify);
    bob.setSubject(&notify);
    charlie.setSubject(&notify);

    notify.registerObserver(&alice);
    notify.registerObserver(&bob);
    notify.registerObserver(&charlie);

    notify.postMessage("Hello, this is your 1st broadcast!");

    notify.unregisterObserver(&bob);

    notify.postMessage("Second message—Bob should not see this.");
}