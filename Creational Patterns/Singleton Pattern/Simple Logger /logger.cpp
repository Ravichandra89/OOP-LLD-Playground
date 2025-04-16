#include "logger.hpp"
#include <iostream>
using namespace std;

int Logger::count =0;

Logger::Logger() {
    count++;
    cout << "Logger Instantiated : And Instance Count" << count << endl;
};

void Logger::logs(const string & message) {
    cout << message << endl;
}