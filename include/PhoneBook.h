#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
#include <vector>
#include <optional>

class PhoneBook {
private:
    std::vector<Contact> contacts;
public:
    void addContact(const std::string& name, const PhoneNumber& phoneNumber);
    std::optional<PhoneNumber> findByName(const std::string& name) const;
    std::optional<std::string> findByNumber(const std::string& number) const;
};

#endif // PHONEBOOK_H