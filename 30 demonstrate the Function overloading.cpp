#include <iostream>

// Function Overloading: add two integers
int add(int a, int b) {
    return a + b;
}

// Function Overloading: add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function Overloading: concatenate two strings
std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    // Calling overloaded functions
    int sum2 = add(5, 7);
    int sum3 = add(3, 8, 2);

    std::string result = concatenate("Hello, ", "World!");

    // Displaying results
    std::cout << "Sum of two integers: " << sum2 << std::endl;
    std::cout << "Sum of three integers: " << sum3 << std::endl;
    std::cout << "Concatenated strings: " << result << std::endl;

    return 0;
}
