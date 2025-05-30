#ifndef OBSERVER_SUBSCRIBER_HPP
#define OBSERVER_SUBSCRIBER_HPP

#include "Observer.hpp"
#include "../Subject/Subject.hpp"
#include <string>

class ObserverSubscriber : public Observer {
        string name;
        Subject * subjectSubscribed;

    public: 
        ObserverSubscriber(const string & name);
        void update() override;
        void setSubject(Subject * sub) override;
};

#endif