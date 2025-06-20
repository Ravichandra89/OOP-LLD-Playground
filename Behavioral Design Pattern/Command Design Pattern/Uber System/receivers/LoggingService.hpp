#ifndef LOGGING_SERVICE_HPP
#define LOGGING_SERVICE_HPP

#include <iostream>
using namespace std;

class LoggingService {
    public : 
        void logTrip() {
            cout << "[LoggingTrip] Trip start logged successfully!" << endl;
        }
};

#endif