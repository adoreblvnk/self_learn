#include <iostream>
#include <string>
int main()
{
    // 5 Flow Control

    // 3 Else If
    int number{30};
    if (number < 0)
    {
        std::cout << "negative number." << std::endl;
    }
    else if (0 < number < 100)
    {
        std::cout << "number between 0 & 100." << std::endl;
    }
    else
    {
        std::cout << "number greater than 100." << std::endl;
    }

    // 4 Switch
    switch (number)
    {
    case 0:
        std::cout << "number is 0." << std::endl;
        break;
    case 30:
        std::cout << "number is 30." << std::endl;
        break;
    default:
        std::cout << "number is not 0 / 30." << std::endl;
        break;
    }

    // 5 Ternary Operator
    std::string result = (number > 0) ? "number is positive." : "number is negative.";
    std::cout << result << std::endl;
    return 0;
}