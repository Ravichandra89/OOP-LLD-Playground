#include "Logger.hpp"
#include <iostream>
#include <string>

using namespace std;

int Logger::count = 0;
Logger* Logger::loggerInstance = new Logger();

Logger::Logger() {
    count++;
    cout << "Logger Instantiated : And Instance Count" << count << endl;
}

void Logger::logs(const string & message) {
    cout << message << endl;
};

// Definition of getLogger instance method
Logger* Logger::getLogger() {
    if (loggerInstance == nullptr) {
        // Create the instance 
        loggerInstance = new Logger();
    }
    return loggerInstance;
}
