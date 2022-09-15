#include <iostream>

int main() {
    // 6 Loops

    // 2 For Loops
    for (unsigned int i{}; i < 5; i++) {
        std::cout << "i: " << i << " Double it: " << i * 2 << std::endl;
    }

    // 3 While Loops
    unsigned int i{};
    while (i < 5) {
        std::cout << "i: " << i << " Triple it: " << i * 3 << std::endl;
        i++;
    }
}
