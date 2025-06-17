#ifndef TELEVISION_HPP
#define TELEVISION_HPP

#include <iostream>
#include <string>
using namespace std;


class Television {
        // Properties of TV
        bool isOn_;
        string loc_;
        int channel_;
        int vol_;

    public :
        // Constructor 
        Television(const string & location) : loc_(location), isOn_(false), channel_(1), vol_(50) {};

        // Method of Tv Device - On(), Off(), setChannel(), volumeUp(), volumeDown()
        void on() {
            if (!isOn_) {
                isOn_ = true;
                cout << "[TV]" << loc_ << "TV is ON. Channel " << channel_ << ", volume: " << vol_ << endl;
            } else {
                cout << "[TV]" << loc_ << "Tv is already ON." << endl;
            }
        }

        void off() {
            if (isOn_) {
                isOn_ = false;
                cout << "[TV]" << loc_ << "TV is OFF." << endl;
            } else {
                cout << "[TV]" << loc_ << "Tv is already OFF." << endl;
            }
        }

        void setChannel(int channel) {
            if (!isOn_) {
                cout << "[TV]" << loc_ << "TV is OFF. Turning ON and setting channel to " << channel_ << "." << endl;
                isOn_ = true;
            } else {
                channel_ = channel;
                cout << "[TV]" << loc_ << "Channel set to " << channel_ << "." << endl;
            }
        }

        void setVolumeUp() {
            if (!isOn_) {
                cout << "[TV]" << loc_ << "Tv is off can't volume Up " << endl;
                return ;
            }
            // set the volume if less than 100
            if (vol_ < 100) {
                vol_++;
                cout << "[TV]" << loc_ << " Tv volume increased to " << vol_ << endl;
            } else {
                cout << "[TV]" << loc_ << "Tv is already at max" << endl;
            }
        }

        void setVolumeDown() {
            if (!isOn_) {
                cout << "[TV]" << loc_ << "Tv is off can't volume Up " << endl;
                return ;
            } 

            // set the volume if greater than 0
            if (vol_ > 0) {
                vol_--;
                cout << "[TV]" << loc_ << " Tv volume decreased to " << vol_ << endl;
            } else {
                cout << "[TV]" << loc_ << "Tv is already at min" << endl;
            }
        }
};

#endif