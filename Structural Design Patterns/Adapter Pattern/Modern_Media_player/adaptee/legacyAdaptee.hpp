#ifndef LEGACY_ADAPTEE_HPP
#define LEGACY_ADAPTEE_HPP

#include <string>
#include <iostream>
using namespace std;

class legacyMedia {
    public: 
        void playMp3(const string& filePath) {
            cout << "Playing mp3 Media for this: " << filePath << endl;
        }
};

class legacyVideo {
    public: 
        void playMp4(const string& filePath) {
            cout << "Playing mp4 Media for this: " << filePath << endl;
        }
};

#endif