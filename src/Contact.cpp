#include "Contact.h"

Contact::Contact(const std::string& name, const PhoneNumber& phoneNumber)
    : name(name), phoneNumber(phoneNumber) {}

std::string Contact::getName() const {
    return name;
}

PhoneNumber Contact::getPhoneNumber() const {
    return phoneNumber;
}