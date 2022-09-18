#include <iostream>

int main() {
    // 8 Pointers

    // 2 Declaring & Using Pointers
    // `&`: reference. an alias to an already-existing variable.
    //   any change to variable's value will modify reference's value, vice
    //   versa.
    // `*`: pointer. stores the memory address to a variable.
    int number{13};
    std::cout << "value: " << number << std::endl;
    std::cout << "address: " << &number << std::endl;

    // dereferencing.
    int *pointer_int{nullptr};
    std::cout << "pointer_int address: " << pointer_int << std::endl;
    int int_val{14};
    pointer_int = &int_val;
    std::cout << "new pointer_int address: " << pointer_int << std::endl;
    std::cout << "pointer_int value: " << *pointer_int << std::endl;
    std::cout << "int_val address: " << &int_val << std::endl;
    std::cout << "int_val value: " << int_val << std::endl;

    // 5 Dynamic Memory Allocation
    //   we, the user, have full control over the memory if we use heap memory,
    //   as opposed to stack memory, which is controlled by the OS.
    // `new`: allocates memory into heap memory.
    // NOTE: remember to release memory to the system via `delete` keyword.
    // NOTE: best practice to reset the pointer to null to signal that you're
    //       not using the memory address.
    int *p_num{new int{77}};
    std::cout << "Dynamically allocating memory for *p_num: " << *p_num
              << std::endl;
    delete p_num;
    p_num = nullptr;

    // 8 Null Pointer Safety
    // check for null pointer.
    if (p_num) {
        std::cout << "p_num pointers to a VALID address: " << p_num
                  << std::endl;
    } else {
        std::cout << "p_num pointers to an INVALID address." << std::endl;
    }
    return 0;
}
