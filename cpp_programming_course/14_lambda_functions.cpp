#include <iostream>

int main() {
    // 13 Lambda Functions

    // 2 Declaring & Using Lambda Functions
    // lambda functions consist of capture list, params, body, return (optional).
    auto add_and_multiply = [](int a, int b) -> int { return a + b + a * b; }(2, 43);
    std::cout << "lambda example: " << add_and_multiply << std::endl;

    // 3 Capture Lists
    int life{42};
    auto increment = [&life]() { life++; };
    increment();
    std::cout << "life increments to: " << life << std::endl;

    // 4 Capture All In Context
    // capture all values & use a copy of respective value.
    double radius{3};
    auto circumference = [=]() -> double { return radius * 2 * 3.14; };
    std::cout << "circumference of circle is: " << circumference() << std::endl;
    // capture all values & modify them in place via reference.
    int wheels{2};
    auto add_training_wheels = [&]() { wheels += 2; };
    add_training_wheels();
    std::cout << "number of wheels after adding training wheels: " << wheels << std::endl;
    return 0;
}
