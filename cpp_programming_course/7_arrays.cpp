#include <iostream>

int main() {
    // 7 Arrays
    int scores[]{1, 2, 5};
    // length of array.
    std::cout << "size of array: " << std::size(scores) << std::endl;
    // range loop.
    std::cout << "array elements: [";
    for (auto val : scores) {
        std::cout << val << " ";
    }
    std::cout << "]" << std::endl;
}