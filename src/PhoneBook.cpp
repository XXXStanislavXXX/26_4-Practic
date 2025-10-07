#include "PhoneBook.h"

void PhoneBook::addContact(const std::string& name, const PhoneNumber& phoneNumber) {
    contacts.emplace_back(name, phoneNumber);
}

std::optional<PhoneNumber> PhoneBook::findByName(const std::string& name) const {
    for (const auto& contact : contacts) {
        if (contact.getName() == name) {
            return contact.getPhoneNumber();
        }
    }
    return std::nullopt;
}

std::optional<std::string> PhoneBook::findByNumber(const std::string& number) const {
    for (const auto& contact : contacts) {
        if (contact.getPhoneNumber().getNumber() == number) {
            return contact.getName();
        }
    }
    return std::nullopt;
}//
// Created by Admin on 07.10.2025.
//