#include "../include/PhoneBook.h"
#include <iostream>

void handleAdd(PhoneBook& phoneBook) {
    std::string name, number;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone number: ";
    std::cin >> number;

    PhoneNumber phoneNumber(number);
    if (!phoneNumber.isValid()) {
        std::cout << "Invalid phone number format. Use +7XXXXXXXXXX.\n";
        return;
    }

    phoneBook.addContact(name, phoneNumber);
    std::cout << "Contact added.\n";
}

void handleCall(const PhoneBook& phoneBook) {
    std::string input;
    std::cout << "Enter name or phone number: ";
    std::cin >> input;

    auto phoneNumber = phoneBook.findByName(input);
    if (!phoneNumber) {
        phoneNumber = PhoneNumber(input).isValid() ? std::optional<PhoneNumber>(PhoneNumber(input)) : std::nullopt;
    }

    if (phoneNumber) {
        std::cout << "CALL " << phoneNumber->getNumber() << "\n";
    } else {
        std::cout << "Contact not found.\n";
    }
}

void handleSms(const PhoneBook& phoneBook) {
    std::string input, message;
    std::cout << "Enter name or phone number: ";
    std::cin >> input;

    auto phoneNumber = phoneBook.findByName(input);
    if (!phoneNumber) {
        phoneNumber = PhoneNumber(input).isValid() ? std::optional<PhoneNumber>(PhoneNumber(input)) : std::nullopt;
    }

    if (phoneNumber) {
        std::cout << "Enter message: ";
        std::cin.ignore();
        std::getline(std::cin, message);
        std::cout << "SMS sent to " << phoneNumber->getNumber() << ": " << message << "\n";
    } else {
        std::cout << "Contact not found.\n";
    }
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (add, call, sms, exit): ";
        std::cin >> command;

        if (command == "add") {
            handleAdd(phoneBook);
        } else if (command == "call") {
            handleCall(phoneBook);
        } else if (command == "sms") {
            handleSms(phoneBook);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Unknown command.\n";
        }
    }

    return 0;
}