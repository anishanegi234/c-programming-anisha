#include <iostream>

int main() {
    // Declare a variable and a pointer
    int num = 42;
    int *ptr = &num;

    // Display the value and address of the variable using dereference
    std::cout << "Value of num: " << *ptr << std::endl;
    std::cout << "Address of num: " << ptr << std::endl;

    // Modify the value using dereference
    *ptr = 100;

    // Display the modified value of the variable
    std::cout << "Modified value of num: " << num << std::endl;

    return 0;
}
