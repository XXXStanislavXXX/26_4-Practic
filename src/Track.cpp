#include "Track.h"
#include <iostream>
#include <iomanip>

Track::Track(const std::string& name, const std::tm& creationDate, int durationSec)
    : name(name), creationDate(creationDate), durationSec(durationSec) {}

std::string Track::getName() const { return name; }
std::tm Track::getCreationDate() const { return creationDate; }
int Track::getDuration() const { return durationSec; }

void Track::printInfo() const {
    std::cout << "Track: " << name << "\n";
    std::cout << "Created: " << std::put_time(&creationDate, "%Y-%m-%d") << "\n";
    std::cout << "Duration: " << durationSec << " sec\n";
}