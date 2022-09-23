#include <iostream>
#include <string>

#include "11_functions/compare.h"

// 3 Function Declaration & Definition
void legal_age(int age);

// 6 Pass By Reference
void increment_age(int &age) { age++; }

int main() {
    // 11 Functions

    // 2 First Hand on Functions
    legal_age(18);

    // 4 Functions Across Multiple Files - Compilation Model Revisited
    std::cout << "max number between num1 & num2 is " << max(3, 4) << std::endl;

    // 6 Pass By Reference
    // passing by reference allows us to modify the variable passed to function in place.
    int age{18};
    std::cout << "current age: " << age << std::endl;
    increment_age(age);
    std::cout << "age next year: " << age << std::endl;
    return 0;
}

// 2 First Hand on Functions 15:42
void legal_age(int age) {
    std::string message = age >= 18 ? "you're of legal age" : "you're underage";
    std::cout << message << std::endl;
    return;
}
