#include <iostream>
#include "target/Imedia.hpp"
#include "adapter/adapter.hpp"

using namespace std;

int main() {
    IMediaPlayer* player = new MediaAdapter();
    player->play("music.mp3", "mp3");
    player->play("video.mp4", "mp4");
}