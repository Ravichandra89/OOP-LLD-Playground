/** Media Interface */
#ifndef INTERFACE_ADAPTEE_HPP
#define INTERFACE_ADAPTEE_HPP

#include <string>
using namespace std;

class IMediaPlayer {
    public: 
        virtual ~IMediaPlayer() = default;
        virtual void play(const string& fileName, const string& format) = 0;
};

#endif