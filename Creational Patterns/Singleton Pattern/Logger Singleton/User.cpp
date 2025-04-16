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

int main() {
    thread t1(user1Logs);
    thread t2(user2Logs);

    t1.join();
    t2.join();

    
    return 0;
}