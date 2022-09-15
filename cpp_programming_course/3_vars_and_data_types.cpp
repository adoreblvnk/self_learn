#include <iostream>

int main() {
    // 3 Variables & Data Types

    // 3 Integers
    // 3 ways to declare vars:
    //   1: assignment initialisation `int a = 1;`.
    //   2: braced initialisation `int a{1};`.
    //   3: functional initialisation `int a(1);`.
    // NOTE: braced initialisation forces the data to conform to the type, &
    // throws an error if not. NOTE: assignment & functional initialisation
    // attempts to convert the data, which can cause unforeseen errors later on.
    int dogCount{};     // preferred: braced initialisation.
    int catCount = 34;  // assignment initialisation.
    int chickenCount(23);
    int animalCount{dogCount + catCount +
                    chickenCount};  // expression allowed in braces.
    std::cout << "animal count: " << animalCount << std::endl;
    std::cout << "sizeof animalCount: " << sizeof(animalCount) << " bytes"
              << std::endl;

    // 4 Integer Modifiers
    // Signed numbers: `unsigned` & `signed`.
    // Size of numbers:
    //   `short`: 2 bytes.
    //   `int`: 4 bytes.
    //   `long`: 4 / 8 bytes.
    //   `long long`: 8 bytes.
    // NOTE: signed numbers aren't frequently used.
    // NOTE: `int` is the recommended default for decimal numbers.
    short int smallNum{3};
    long long int largeNum{3};
    std::cout << "sizeof smallNum: " << sizeof(smallNum) << std::endl
              << "sizeof largeNum: " << sizeof(largeNum) << std::endl;

    // 5 Fractional Numbers
    // Size of fractional numbers:
    //   `float`: 4 bytes.
    //   `double`: 8 bytes.
    //   `long double`: 16 bytes.
    // NOTE: `double` is the recommended default.
    long double largeFloat{3.12312412456423};
    std::cout << "sizeof largeFloat: " << sizeof(largeFloat) << std::endl;

    // 7 Characters & Text
    char value = 65;  // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl;  // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

    // 8 Auto
    // `auto` performs type inference.
    auto deduceFraction{1231.123123};
    std::cout << "Size of deduceFraction: " << sizeof(deduceFraction)
              << " bytes" << std::endl;

    return 0;
}
