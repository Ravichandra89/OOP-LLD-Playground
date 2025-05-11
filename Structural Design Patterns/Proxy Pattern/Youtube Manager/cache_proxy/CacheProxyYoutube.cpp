#include "CacheProxyYoutube.hpp"
#include <iostream>

using namespace std;

void CacheProxyYoutube::setService(ThirdPartyYoutubeLib* svc) {
    service = svc;
};

vector<Video> CacheProxyYoutube::listVideos() {
    if (!cacheInitalized && service) {
        videoCache = service->listVideos();
        cacheInitalized = true;
    }
    return videoCache;
};

Video CacheProxyYoutube::getVideoInfo(const string & id) {
    auto it = infoCache.find(id);
    if (it != infoCache.end()) return it->second;
    if (service) {
        Video v = service->getVideoInfo(id);
        infoCache[id] = v;
        return v; 
    }

    return {"",""};
};

void CacheProxyYoutube::downloadVideo(const string & id) {
    if (service) {
        service->downloadVideo(id);
        cout << "Video Downloaded Successfully.." << endl;
    }
}