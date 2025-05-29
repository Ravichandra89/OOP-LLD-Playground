#ifndef TV_DISPLAY_CONCRETE_OBSERVER_HPP
#define TV_DISPLAY_CONCRETE_OBSERVER_HPP

#include "Observer.hpp"
#include <iostream>

using namespace std;

class TvDisplay : public Observer {
        string weather;
    public: 
        void update(const string & changeWeather) override {
            weather = changeWeather;
        }

        void display() const override {
            cout << "[TV Display] Current Weather: " << weather << endl;
        }
};

#endif