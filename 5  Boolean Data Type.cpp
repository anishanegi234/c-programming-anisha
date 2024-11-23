#include <iostream>

int main() {
    // Boolean data type
    bool isCplusplusFun = true;
    bool isProgrammingEasy = false;

    // Display boolean values
    std::cout << "Is C++ fun? " << std::boolalpha << isCplusplusFun << std::endl;
    std::cout << "Is programming easy? " << std::boolalpha << isProgrammingEasy << std::endl;

    // Logical operations
    bool resultAnd = isCplusplusFun && isProgrammingEasy;
    bool resultOr = isCplusplusFun || isProgrammingEasy;
    bool resultNot = !isProgrammingEasy;

    // Display the results of logical operations
    std::cout << "Result of AND operation: " << std::boolalpha << resultAnd << std::endl;
    std::cout << "Result of OR operation: " << std::boolalpha << resultOr << std::endl;
    std::cout << "Result of NOT operation: " << std::boolalpha << resultNot << std::endl;

    return 0;
}
