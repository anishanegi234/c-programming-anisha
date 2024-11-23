#include <iostream>

int main() {
    // Declare variables
    int number, factorial = 1;

    // Prompt the user to enter a number
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the entered number is positive
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        // Output the result
        std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    }

    return 0;
}
