#include "ThirdPartyYoutubeClass.hpp"
#include <iostream>

using namespace std;

/**
 * Implementing All Third Party Library Interfaces Methods
 */

vector<Video> ThirdPartyYoutubeClass::listVideos() {
    this_thread::sleep_for(chrono::seconds(2));
    return { {"a1","Funny Cats"}, {"b2","Inspirational Talk"}, {"c3","Guitar Tutorial"} };
};

Video ThirdPartyYoutubeClass::getVideoInfo(const string & id) {
    this_thread::sleep_for(chrono::seconds(2));
    return { id, "Title for " + id };
}

void ThirdPartyYoutubeClass::downloadVideo(const string & id) {
    cout << "Downloading video" << id << "..." << endl;
}