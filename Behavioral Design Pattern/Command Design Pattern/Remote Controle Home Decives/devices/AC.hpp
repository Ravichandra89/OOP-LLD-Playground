#ifndef AIR_CONDITIONER_HPP
#define AIR_CONDITIONER_HPP

#include <iostream>
#include <string>
using namespace std;

class AirConditioner {
        // Properties of Air Conditioner
        string loc_;
        bool isOn_;
        double temperature_;

    public : 
        // Constructor
        AirConditioner(const string & location) : loc_(location), isOn_(false), temperature_(24.0) {};

        // Method of AC - On(), Off(), setTemperature()
        void on() {
            if (!isOn_) {
                isOn_ = true;
                cout << "[AC]" << loc_ << " Air Conditioner is ON. Temperature set to " << temperature_ << "°C." << endl;
            } else {
                cout << "[AC]" << loc_ << " Air Conditioner is already ON." << endl;
            }
        }

        void off() {
            if (isOn_) {
                isOn_ = false;
                cout << "[AC]" << loc_ << " Air Conditioner is OFF." << endl;
            } else {
                cout << "[AC]" << loc_ << " Air Conditioner is already OFF." << endl;
            }
        }

        void setTemperature(double temp) {
            if (!isOn_) {
                isOn_ = true;
                temperature_ = temp;
                cout << "[AC]" << loc_ << " Air Conditioner is ON. Temperature set to " << temperature_ << "°C." << endl;
            } else {
                // If Ac is already On
                temperature_ = temp;
                cout << "[AC]" << loc_ << "Temperature set to " << temperature_ << "°C." << endl;
            }
        }
};

#endif