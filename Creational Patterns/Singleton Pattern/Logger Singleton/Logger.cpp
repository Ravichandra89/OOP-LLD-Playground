#include "Logger.hpp"
#include <iostream>
#include <string>
#include <mutex>

using namespace std;

int Logger::count = 0;
Logger* Logger::loggerInstance = nullptr;
mutex Logger::mtx;

Logger::Logger() {
    count++;
    cout << "Logger Instantiated : And Instance Count " << count << endl;
}

void Logger::logs(const string & message) {
    cout << message << endl;
};

// Definition of getLogger instance method + Putting Lock
// Logger* Logger::getLogger() {
//     mtx.lock();
//     if (loggerInstance == nullptr) {
//         // Create the instance 
//         loggerInstance = new Logger();
//     }
//     cout << "Locked" << endl;
//     mtx.unlock();
//     return loggerInstance;
// }

/**
 * Double locking - To avoid the overhead of acquiring a lock every time even for getting the instance
 */

Logger* Logger::getLogger() {
    if (loggerInstance == nullptr) {
        mtx.lock();
        if (loggerInstance == nullptr) {
            loggerInstance = new Logger();
        }
        mtx.unlock();
    }
    return loggerInstance;
}