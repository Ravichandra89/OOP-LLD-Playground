/**
 * Interface for the Third Party Youtube library
 */

#ifndef THIRD_PARTY_YOUTUBE_LIB_HPP
#define THIRD_PARTY_YOUTUBE_LIB_HPP

#include <string>
#include <vector>
using namespace std;

struct Video {
    string id;
    string title;
};

class ThirdPartyYoutubeLib {
    public: 
        virtual ~ThirdPartyYoutubeLib() = default;
        virtual vector<Video> listVideos() = 0;
        virtual Video getVideosInfo(const string & id) = 0;
        virtual void downloadVideos(const string & id) = 0;
};

#endif