#include <iostream>

int main() {
    // Declaration and initialization of boolean variables
    bool isTrue = true;
    bool isFalse = false;

    // Output boolean values
    std::cout << "isTrue: " << isTrue << std::endl;
    std::cout << "isFalse: " << isFalse << std::endl;

    // Boolean operations
    bool resultAnd = isTrue && isFalse;  // Logical AND
    bool resultOr = isTrue || isFalse;   // Logical OR
    bool resultNot = !isTrue;             // Logical NOT

    // Output the results of boolean operations
    std::cout << "isTrue && isFalse: " << resultAnd << std::endl;
    std::cout << "isTrue || isFalse: " << resultOr << std::endl;
    std::cout << "!isTrue: " << resultNot << std::endl;

    // Comparison operators
    int number1 = 10;
    int number2 = 5;

    bool isEqual = (number1 == number2);
    bool isNotEqual = (number1 != number2);
    bool isGreater = (number1 > number2);
    bool isLess = (number1 < number2);

    // Output the results of comparison operators
    std::cout << "number1 == number2: " << isEqual << std::endl;
    std::cout << "number1 != number2: " << isNotEqual << std::endl;
    std::cout << "number1 > number2: " << isGreater << std::endl;
    std::cout << "number1 < number2: " << isLess << std::endl;

    return 0;
}
