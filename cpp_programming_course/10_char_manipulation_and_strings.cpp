#include <iostream>
#include <string>

int main() {
    // 10 Character Manipulation & Strings

    // 2 Character Manipulation
    // check if character is alphanumeric.
    char character{'K'};
    if (std::isalnum(character)) {
        std::cout << character << " is alphanumeric." << std::endl;
    } else {
        std::cout << character << " is NOT alphanumeric." << std::endl;
    }

    // 5 Introducing std::string 140338
    std::string message{"hello Earth!"};  // initialize part of string.
    // string slicing till character 6.
    std::string greeting{"hello Earth!", 5};
    std::string planet{message, 6, 5};  // string slicing, from
    std::cout << "message: " << message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "planet: " << planet << std::endl;
    return 0;
}