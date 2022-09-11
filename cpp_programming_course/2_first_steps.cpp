#include <iostream>
#include <string>

// 5 Statements & Functions
int addNumbers(int first_param, int second_param)
{
    int sum = first_param + second_param;
    return sum;
}

int main()
{
    // 2 First Steps

    // 2 First C++ Program
    // compile with `g++ main.cpp -o main`.
    std::cout << "Hello World!" << std::endl;

    // 4 Errors & Warnings
    // error types:
    // compile time errors.
    /*
    std::cout << "Hello World!" << std::endl  // no semicolon.
    */
    // runtime errors & warning.
    /*
    int value = 7/0;
    std::cout << "value: " << value << std::endl;
    */

    // 5 Statements & Functions
    int first_num{3}; // statement.
    int second_num{7};
    int sum = addNumbers(first_num, second_num);
    std::cout << "sum: " << sum << std::endl;

    // 6 Input & Output
    // objects.
    // `std::cout`: character out. prints to console.
    // `std::cin`: character in. reads from console.
    // `std::cerr`: character error. prints error to console.
    // `std::clog`: character log. prints log messages to console.
    int age;
    std::string full_name;
    std::cout << "type your name & age: " << std::endl;
    std::getline(std::cin, full_name); // data with spaces.
    std::cin >> age;
    std::cout << "hello " << full_name << " your age is " << age << std::endl;

    /*
    std::cerr << "error message" << std::endl;
    std::clog << "log message" << std::endl;
    */

    return 0;
}
