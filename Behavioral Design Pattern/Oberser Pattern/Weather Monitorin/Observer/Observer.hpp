#ifndef MONITORING_SYSTEM_OBSERVER_HPP
#define MONITORING_SYSTEM_OBSERVER_HP

#include <string>
using namespace std;

class Observer {
    public: 
        virtual void update(const string & weather);
        virtual void display() const = 0;
        virtual ~Observer() = default;
};

#endif