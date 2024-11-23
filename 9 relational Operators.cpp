#include <iostream>

int main() {
    // Declare and initialize two variables
    int num1 = 10;
    int num2 = 5;

    // Equal to
    bool isEqual = (num1 == num2);
    std::cout << "Equal to: " << isEqual << std::endl;

    // Not equal to
    bool isNotEqual = (num1 != num2);
    std::cout << "Not equal to: " << isNotEqual << std::endl;

    // Greater than
    bool isGreater = (num1 > num2);
    std::cout << "Greater than: " << isGreater << std::endl;

    // Less than
    bool isLess = (num1 < num2);
    std::cout << "Less than: " << isLess << std::endl;

    // Greater than or equal to
    bool isGreaterOrEqual = (num1 >= num2);
    std::cout << "Greater than or equal to: " << isGreaterOrEqual << std::endl;

    // Less than or equal to
    bool isLessOrEqual = (num1 <= num2);
    std::cout << "Less than or equal to: " << isLessOrEqual << std::endl;

    return 0;
}
