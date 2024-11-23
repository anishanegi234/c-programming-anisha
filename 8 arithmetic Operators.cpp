#include <iostream>

int main() {
    // Declare and initialize two variables
    int num1 = 10;
    int num2 = 5;

    // Addition
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;

    // Subtraction
    int difference = num1 - num2;
    std::cout << "Difference: " << difference << std::endl;

    // Multiplication
    int product = num1 * num2;
    std::cout << "Product: " << product << std::endl;

    // Division
    int quotient = num1 / num2;
    std::cout << "Quotient: " << quotient << std::endl;

    // Modulus (Remainder after division)
    int remainder = num1 % num2;
    std::cout << "Remainder: " << remainder << std::endl;

    // Increment
    num1++;
    std::cout << "After Increment, num1: " << num1 << std::endl;

    // Decrement
    num2--;
    std::cout << "After Decrement, num2: " << num2 << std::endl;

    return 0;
}
