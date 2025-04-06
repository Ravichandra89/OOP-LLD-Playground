#ifndef IEVENTSTORE_HPP
#define IEVENTSTORE_HPP

#include <string>
#include <vector>
using namespace std;

class IEventStore
{
public:
    virtual ~IEventStore() = default;
    virtual void storeEvent(const string &eventType, string &data) = 0;
    virtual vector<string> getEvents(const string &entityId) = 0;
};

#endif