#ifndef logger_hpp
#define logger_hpp

#include <string>
using namespace std;

// Counting the number of Instances

class Logger {
    static int count;
    public: 
        // Constructor
        Logger();
        void logs(const string & message);
};

#endif