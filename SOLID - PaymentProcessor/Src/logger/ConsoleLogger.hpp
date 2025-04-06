#ifndef CONSOLELOGGER_HPP
#define CONSOLELOGGER_HPP

#include "ILogger.hpp"
#include <string>
using namespace std;

class ConsoleLogger : public ILogger
{
public:
    void log(const string &msg) override;
};

#endif