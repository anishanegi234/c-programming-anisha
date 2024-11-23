#include <iostream>

int main() {
    // Integer data type
    int intValue = 42;
    std::cout << "Integer Value: " << intValue << std::endl;

    // Floating-point data types
    float floatValue = 3.14f;
    double doubleValue = 2.71828;
    std::cout << "Float Value: " << floatValue << std::endl;
    std::cout << "Double Value: " << doubleValue << std::endl;

    // Character data type
    char charValue = 'A';
    std::cout << "Char Value: " << charValue << std::endl;

    // Arithmetic operations
    int a = 10;
    int b = 20;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = static_cast<float>(a) / b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
