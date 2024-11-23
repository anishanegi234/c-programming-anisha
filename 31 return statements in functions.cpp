#include <iostream>

// Function with a return statement
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

// Function with an early return statement
bool isPositive(int num) {
    if (num > 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Calling the function and using the returned value
    int result = addNumbers(5, 7);

    // Displaying the result
    std::cout << "The sum is: " << result << std::endl;

    // Calling the function with an early return
    int numberToCheck = -3;
    bool positive = isPositive(numberToCheck);

    // Displaying the result of the early return
    if (positive) {
        std::cout << numberToCheck << " is positive." << std::endl;
    } else {
        std::cout << numberToCheck << " is not positive." << std::endl;
    }

    return 0;
}
