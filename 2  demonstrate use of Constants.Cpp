#include<iostream>

// Define a constant for PI
const double PI = 3.14159;

int main() {
    // Declare and initialize a constant
    const int MAX_VALUE = 100;

    // Display the constant value
    std::cout << "Max Value: " << MAX_VALUE << std::endl;

    // Attempting to modify a constant will result in a compilation error
    // Uncommenting the line below will result in a compilation error
    // MAX_VALUE = 200;

    // Display the value of PI
    std::cout << "Value of PI: " << PI << std::endl;

    return 0;
}
