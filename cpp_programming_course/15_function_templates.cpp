#include <cstring>
#include <iostream>
#include <typeinfo>

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <>
const char* maximum<const char*>(const char* a, const char* b) {
    // strcmp docs: https://cplusplus.com/reference/cstring/strcmp/
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main() {
    // 15 Function Templates

    // 2 Trying Out Function Templates
    // compiler generates function for each type based on template.
    int num_1{23}, num_2{74};
    std::cout << "maximum of integers is: " << maximum(num_1, num_2) << std::endl;
    double float_1{23.123}, float_2{934.1};
    std::cout << "maximum of float is: " << maximum(float_1, float_2) << std::endl;

    // 3 Template Type Deduction & Explicit Arguments
    // explicitly does implicit conversion of argument datatypes to desired datatype.
    auto result = maximum<double>(num_1, num_2);
    std::cout << "maximum of integers is: " << result << std::endl;
    std::cout << "type of result: " << typeid(result).name() << std::endl;

    // 5 Template Specialisation
    // template specialisation is used to modify how function templates are generated, for each datatype.
    const char *string_1{"wild"}, *string_2{"animal"};
    std::cout << "maximum string is: " << maximum(string_1, string_2) << std::endl;
    return 0;
}