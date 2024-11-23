#include <iostream>

int main() {
    // Declare variables
    int num1 = 42;
    double num2 = 3.14;

    // Display the memory addresses of the variables
    std::cout << "Memory address of num1: " << &num1 << std::endl;
    std::cout << "Memory address of num2: " << &num2 << std::endl;

    // Declare a pointer and assign the address of num1 to it
    int* ptr = &num1;

    // Display the value and content at the memory address pointed by the pointer
    std::cout << "Value at memory address " << ptr << ": " << *ptr << std::endl;

    // Change the value at the memory address using the pointer
    *ptr = 100;

    // Display the modified value of num1
    std::cout << "Modified value of num1: " << num1 << std::endl;

    return 0;
}
