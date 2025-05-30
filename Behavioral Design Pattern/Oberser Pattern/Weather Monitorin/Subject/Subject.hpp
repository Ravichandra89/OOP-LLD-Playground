#ifndef WEATHER_STATION_SUBJECT_HPP
#define WEATHER_STATION_SUBJECT_HPP

#include <string>
using namespace std;


class Subject {
    public: 
        virtual void addObserver(Observer* ob) = 0;
        virtual void removeObserver(Observer* ob) = 0;
        virtual void notifyObserver() = 0;
        virtual ~Subject() = default;
};

#endif