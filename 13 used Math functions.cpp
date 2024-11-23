#include <iostream>
#include <cmath>

int main() {
    // Square root
    double number = 25.0;
    double sqrtResult = sqrt(number);
    std::cout << "Square root of " << number << " is: " << sqrtResult << std::endl;

    // Power (exponentiation)
    double base = 2.0;
    double exponent = 3.0;
    double powerResult = pow(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << powerResult << std::endl;

    // Trigonometric functions
    double angleInRadians = 1.0;  // 1 radian is approximately 57.296 degrees
    double sinResult = sin(angleInRadians);
    double cosResult = cos(angleInRadians);
    double tanResult = tan(angleInRadians);
    std::cout << "Sin(" << angleInRadians << ") = " << sinResult << std::endl;
    std::cout << "Cos(" << angleInRadians << ") = " << cosResult << std::endl;
    std::cout << "Tan(" << angleInRadians << ") = " << tanResult << std::endl;

    // Absolute value
    int negativeValue = -10;
    int absoluteValue = abs(negativeValue);
    std::cout << "Absolute value of " << negativeValue << " is: " << absoluteValue << std::endl;

    // Round and floor functions
    double decimalValue = 12.345;
    double roundedValue = round(decimalValue);
    double flooredValue = floor(decimalValue);
    std::cout << "Rounded value of " << decimalValue << " is: " << roundedValue << std::endl;
    std::cout << "Floored value of " << decimalValue << " is: " << flooredValue << std::endl;

    return 0;
}
