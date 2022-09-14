#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
    // 4 Operations on Data

    // 8 Output Formatting
    // text width.
    std::cout << std::left;
    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::endl;
    std::cout << std::setw(10) << "adore" << std::setw(10) << "blvnk" << std::endl;
    std::cout << std::setw(10) << "nitro" << std::setw(10) << "poops" << std::endl;
    std::cout << std::endl;
    // printing booleans.
    std::cout << std::boolalpha << "Booleans as words: " << true << std::endl;
    std::cout << std::noboolalpha << "Booleans as numbers (default): " << false << std::endl;
    std::cout << std::endl;
    // printing number systems.
    int number = 539;
    std::cout << "Decimal number (default): " << std::dec << number << std::endl;
    std::cout << "Octal number: " << std::oct << number << std::endl;
    std::cout << "Hexadecimal number: " << std::hex << number << std::endl;
}