#pragma once
#include "Track.h"
#include <vector>
#include <optional>

class AudioPlayer {
public:
    AudioPlayer(const std::vector<Track>& tracks);

    void resume();
    void status() const;
    void play(const std::string& trackName);
    void pause();
    void next();
    void stop();
    void printCurrentTrack() const;

private:
    std::vector<Track> tracks;
    std::optional<size_t> currentTrackIndex;
    bool isPlaying = false;
    bool isPaused = false;
};