#include <iostream>
#include "EventStoreImpl.hpp"

using namespace std;

void EventStoreImpl::storeEvent(const string &eventType, const string &data)
{
    events[eventType].push_back(data);
}

vector<string> EventStoreImpl::getEvents(const string &entityId)
{
    return events[entityId];
}
