#include "PhoneNumber.h"
#include <regex>

PhoneNumber::PhoneNumber(const std::string& number) : number(number) {}

std::string PhoneNumber::getNumber() const {
    return number;
}

bool PhoneNumber::isValid() const {
    std::regex pattern(R"(\+7\d{10})");
    return std::regex_match(number, pattern);
}