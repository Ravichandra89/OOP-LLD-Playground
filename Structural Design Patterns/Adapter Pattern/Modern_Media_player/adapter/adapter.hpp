#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "../target/Imedia.hpp"
#include "../adaptee/legacyAdaptee.hpp"
#include <iostream>
using namespace std;

class MediaAdapter : public IMediaPlayer {
        legacyMedia mp3;
        legacyVideo mp4;
    public: 
        MediaAdapter() = default; // default constructor
        
        void play(const string& fileName, const string& format) override {
            if (format == "mp3") {
                mp3.playMp3(fileName);
            } 
            else if (format == "mp4") {
                mp4.playMp4(fileName);
            }
            else {
                cout << "Invalid Media Type" << endl;
            }
        }
};

#endif
