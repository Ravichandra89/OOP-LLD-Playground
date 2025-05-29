#ifndef OBSERVER_PHONE_DISPLAY_HPP
#define OBSERVER_PHONE_DISPLAY_HPP

#include "Observer.hpp"

#include <iostream>
using namespace std;

class PhoneDisplay : public Observer {
        string weather;
    public: 
        void update(const string & newWeather) override {
            weather = newWeather;
        }

        void display() const override {
            cout << "[Phone Display] Current Weather: " << weather << endl;
        }
};
 
#endif