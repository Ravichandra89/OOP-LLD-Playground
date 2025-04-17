#include "Logger.hpp"
#include <iostream>
#include <thread>

using namespace std;

void user1Logs() {
    Logger * log1 = Logger::getLogger();
    log1->logs("This is message from User 1");
}

void user2Logs() {
    Logger* log2 = Logger::getLogger();
    log2->logs("This is message from User 2");
}

void user3Logs() {
    Logger* log3 = Logger::getLogger();
    log3->logs("This is message from User 3");
}

void user4Logs() {
    Logger* log4 = Logger::getLogger();
    log4->logs("This is message from User 4");
}

int main() {
    cout << "Thread Problem " << endl;
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