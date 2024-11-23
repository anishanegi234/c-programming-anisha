#include <iostream>

// Function declaration with parameters
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    // Calling the function with arguments
    int result = addNumbers(5, 7);

    // Displaying the result
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
