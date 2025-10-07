#include "AudioPlayer.h"
#include <iostream>
#include <vector>

std::tm makeDate(int year, int month, int day) {
    std::tm t = {};
    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = day;
    return t;
}

int main() {
    std::vector<Track> tracks = {
        Track("Song1", makeDate(2023, 5, 1), 210),
        Track("Song2", makeDate(2022, 8, 15), 180),
        Track("Song3", makeDate(2024, 1, 10), 240)
    };

    AudioPlayer player(tracks);

    std::string command;
    while (true) {
        std::cout << "Enter command (play, pause, next, stop, exit, status, resume): ";
        std::cin >> command;
        if (command == "play") {
            std::cout << "Enter track name: ";
            std::string name;
            std::cin >> name;
            player.play(name);
        }else if (command == "status") {
            player.status();
        }else if (command == "pause") {
            player.pause();
        } else if (command == "next") {
            player.next();
        } else if (command == "stop") {
            player.stop();
        } else if (command == "exit") {
            break;
        } else if (command == "resume") {
            player.resume();
        }
    }
    return 0;
}