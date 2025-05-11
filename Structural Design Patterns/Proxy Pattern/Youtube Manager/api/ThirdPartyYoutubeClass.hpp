/**
 * Concrete youtube real object class header file
 */

#ifndef THIRD_PARTY_YOUTUBE_CLASS_HPP
#define THIRD_PARTY_YOUTUBE_CLASS_HPP

#include "ThirdPartyYoutubeLib.hpp"
#include <thread>
#include <chrono>

class ThirdPartyYoutubeClass : public ThirdPartyYoutubeLib {
    public: 
        vector<Video> listVideos() override;
        Video getVideoInfo(const string & id) override;
        void downloadVideo(const string & id) override;
};


#endif