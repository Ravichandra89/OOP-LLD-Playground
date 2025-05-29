//  Subject for the Weather Monitoring System 
#ifndef WEATHER_STATION_SYSTEM_SUBJECT_HPP
#define WEATHER_STATION_SYSTEM_SUBJECT_HPP

#include "Subject.hpp"
#include <string>
#include <vector> // For Observer List 
using namespace std;

class WeatherStation : public Subject {
        vector<Observer*> observers;
        string weather;

    public: 
        void addObserver(Observer* obs) override {
            observers.push_back(obs);
        }

        void removeObserver(Observer* obs) override {
            observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());
        }

        void notifyObserver() override {
            for (auto * it : observers) {
                it->update(weather);
            }
        }

        void setWeather(const string & changeWeather) {
            weather = changeWeather;
            notifyObserver();
        }
};

#endif