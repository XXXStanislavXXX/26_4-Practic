#include "AudioPlayer.h"
#include <iostream>
#include <random>
#include <ctime>

AudioPlayer::AudioPlayer(const std::vector<Track>& tracks) : tracks(tracks) {}

void AudioPlayer::play(const std::string& trackName) {
    if (isPlaying) return;
    for (size_t i = 0; i < tracks.size(); ++i) {
        if (tracks[i].getName() == trackName) {
            currentTrackIndex = i;
            isPlaying = true;
            isPaused = false;
            tracks[i].printInfo();
            return;
        }
    }
    std::cout << "Track not found.\n";
}

void AudioPlayer::pause() {
    if (isPlaying && !isPaused) {
        isPaused = true;
        std::cout << "Paused.\n";
    }
}

void AudioPlayer::next() {
    if (tracks.empty()) return;
    std::mt19937 gen(static_cast<unsigned>(std::time(nullptr)));
    std::uniform_int_distribution<size_t> dist(0, tracks.size() - 1);
    size_t nextIndex = dist(gen);
    currentTrackIndex = nextIndex;
    isPlaying = true;
    isPaused = false;
    tracks[nextIndex].printInfo();
}

void AudioPlayer::stop() {
    if (isPlaying) {
        isPlaying = false;
        isPaused = false;
        std::cout << "Stopped.\n";
    }
}

void AudioPlayer::printCurrentTrack() const {
    if (currentTrackIndex.has_value())
        tracks[currentTrackIndex.value()].printInfo();
}

void AudioPlayer::status() const {
    if (isPlaying) {
        std::cout << "Status: Playing\n";
        if (isPaused) {
            std::cout << "Paused\n";
        }
        printCurrentTrack();
    } else {
        std::cout << "Status: Stopped\n";
    }
}

void AudioPlayer::resume() {
    if (isPlaying && isPaused) {
        isPaused = false;
        std::cout << "Resumed.\n";
        printCurrentTrack();
    }
}