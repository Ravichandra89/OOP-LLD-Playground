#include <iostream>
#include "logger.hpp"
using namespace std;

int main() {
    Logger * log = new Logger();
    log->logs("This is message  from User 1");
    
    Logger * logs2 = new Logger();
    logs2->logs("This is message from User 2");
}