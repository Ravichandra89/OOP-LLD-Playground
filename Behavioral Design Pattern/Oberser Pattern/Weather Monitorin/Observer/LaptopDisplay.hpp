#ifndef LAPTOP_DISPLAY_HPP
#define LAPTOP_DISPLAY_HPP

#include <iostream>

class LaptopDisplay : public Observer {
        string weather;
    public: 
        void update(const string & changeWeather) override {
            weather = changeWeather;
        }

        void display() const override {
            cout << "[LaptopDisplay] current Weather: " << weather << endl;
        }
};

#endif
