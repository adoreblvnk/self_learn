#include <iostream>

int main() {
    // 9 References

    // 2 Declaring & Using References
    //   references makes copies / aliases of variables which, when modified,
    //   affects the original variables.
    int num{33};
    double decimal{22.3};
    int &ref_num{num};
    double &ref_dec{decimal};
    std::cout << "num: " << num << std::endl;
    std::cout << "num address: " << &num << std::endl;
    std::cout << "reference num: " << ref_num << std::endl;
    std::cout << "reference num address: " << &ref_num << std::endl;
    std::cout << "decimal: " << decimal << std::endl;
    std::cout << "decimal address: " << &decimal << std::endl;
    std::cout << "reference decimal: " << ref_dec << std::endl;
    std::cout << "reference decimal address: " << &ref_dec << std::endl;
    num = 1;
    std::cout << "modified num: " << num << std::endl;
    std::cout << "modified num address: " << &num << std::endl;
    std::cout << "modified reference num: " << ref_num << std::endl;
    std::cout << "modified reference num address: " << &ref_num << std::endl;

    return 0;
}