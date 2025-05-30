#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>
using namespace std;

class Subject;

class Observer {
    public: 
        virtual void update() = 0;
        virtual void setSubject(Subject *sub) = 0;
        virtual ~Observer() = default;
};

#endif
