#include <concepts>
#include <iostream>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // 16 Concepts

    // 2 Concepts
    double float_1{3.58}, pi{3.14};
    // must convert to int first as concept requires int type only.
    auto addition = add(static_cast<int>(float_1), static_cast<int>(pi));
    std::cout << "addition: " << addition << std::endl;

    // 19:25:32 Concepts: Building Your Own

    // 19:42:45 Requires Clause: Zooming In

    // 19:59:53 Logical Combinations Of Concepts

    // 20:09:39 Concepts And Auto
    return 0;
}