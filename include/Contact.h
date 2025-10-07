#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneNumber.h"
#include <string>

class Contact {
private:
    std::string name;
    PhoneNumber phoneNumber;
public:
    Contact(const std::string& name, const PhoneNumber& phoneNumber);
    std::string getName() const;
    PhoneNumber getPhoneNumber() const;
};

#endif // CONTACT_H