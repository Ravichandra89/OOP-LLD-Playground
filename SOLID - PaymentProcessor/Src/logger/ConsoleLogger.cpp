#ifndef CONSOLELOGGER_CPP
#define CONSOLELOGGER_CPP

#include "ConsoleLogger.hpp"
#include <iostream>
#include <string>
using namespace std;

void ConsoleLogger::log(const string &msg)
{
    cout << "[LOG]: " << msg << endl;
}

#endif