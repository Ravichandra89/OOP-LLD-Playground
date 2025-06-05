#ifndef CHAIN_PATTERN_LOGGER_SYSTEM_REQUEST_HPP
#define CHAIN_PATTERN_LOGGER_SYSTEM_REQUEST_HPP

#include <string>
using namespace std;

struct Request {
    int priority;
    string message;
};

#endif