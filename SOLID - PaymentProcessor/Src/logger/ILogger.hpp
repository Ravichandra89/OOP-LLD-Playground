#ifndef ILOGGER_HPP
#define ILOGGER_HPP

#include <string>
using namespace std;

class ILogger {
    public: 
        virtual void log(const string & msg) = 0;
        virtual ~ILogger() = default;
};

#endif