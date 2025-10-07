#pragma once
#include <string>
#include <ctime>

class Track {
public:
    Track(const std::string& name, const std::tm& creationDate, int durationSec);

    std::string getName() const;
    std::tm getCreationDate() const;
    int getDuration() const;
    void printInfo() const;

private:
    std::string name;
    std::tm creationDate;
    int durationSec;
};