#include <iostream>

int main() {
    // Declare a variable to store the user input
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Decision statement to check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The entered number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The entered number is negative." << std::endl;
    } else {
        std::cout << "The entered number is zero." << std::endl;
    }

    return 0;
}
