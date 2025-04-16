#include "Logger.hpp"
#include <iostream>
using namespace std;

int main() {
    Logger * log = Logger::getLogger();
    log->logs("This is message from User 1");

    Logger * logs2 = Logger::getLogger();
    logs2->logs("This is message from User 2");

    // Clean up
    // delete log;
    // delete logs2;

    return 0;
}