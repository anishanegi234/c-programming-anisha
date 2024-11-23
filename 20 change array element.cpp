#include <iostream>

int main() {
    // Creating an array of integers with size 5
    const int arraySize = 5;
    int myArray[arraySize];

    // Assigning initial values to the array elements
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = i;  // Assigning consecutive numbers
    }

    // Displaying the original values of the array
    std::cout << "Original Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Changing the value of the third element (index 2)
    int indexToChange = 2;
    int newValue = 99;
    myArray[indexToChange] = newValue;

    // Displaying the modified values of the array
    std::cout << "Modified Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
