#ifndef EVENT_STORE_IMPL_HPP
#define EVENT_STORE_IMPL_HPP

#include "IEventStore.hpp"
#include <string>
#include <map>
#include <vector>

using namespace std;

class EventStoreImpl : public IEventStore {
    map<string, vector<string>> events;

public:
    void storeEvent(const string &eventType, const string &data) override;
    vector<string> getEvents(const string &entityId) override;
};

#endif
