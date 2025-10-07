#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>

class PhoneNumber {
private:
    std::string number;
public:
    explicit PhoneNumber(const std::string& number);
    std::string getNumber() const;
    bool isValid() const;
};

#endif // PHONENUMBER_H