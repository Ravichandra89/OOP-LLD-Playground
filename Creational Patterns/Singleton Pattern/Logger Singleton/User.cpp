#include "Logger.hpp"
#include <iostream>
#include <thread>

using namespace std;

void user1Logs() {
    Logger * log = Logger::getLogger();
    log->logs("This is message from User 1");
}

void user2Logs() {
    Logger * logs2 = Logger::getLogger();
    logs2->logs("This is message from User 2");
}

void user3Logs() {
    Logger * logs3 = Logger::getLogger();
    logs3->logs("This is message from User 3");
}

void user4Logs() {
    Logger * logs4 = Logger::getLogger();
    logs4->logs("This is message from User 4");
}

int main() {
    thread t1(user1Logs);
    thread t2(user2Logs);
    thread t3(user3Logs);
    thread t4(user4Logs);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}