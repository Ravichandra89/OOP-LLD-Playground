/**
 * Caching Proxy for the Youtube System        
 */

#ifndef CACHE_PROXY_YOUTUBE_HPP
#define CACHE_PROXY_YOUTUBE_HPP

#include "../api/ThirdPartyYoutubeLib.hpp"
#include <unordered_map>


class CacheProxyYoutube : public ThirdPartyYoutubeLib {
        ThirdPartyYoutubeLib* service = nullptr;
        vector<Video> videoCache;
        unordered_map<string, Video> infoCache;
        bool cacheInitalized = false;
    
    public: 
        CacheProxyYoutube() = default;
        void setService (ThirdPartyYoutubeLib* svc);
        vector<Video> listVideos() override;
        Video getVideoInfo(const string & id) override;
        void downloadVideo(const string & id) override;
};

#endif

