#include <iostream>

int main() {
    // Creating an array of integers with size 5
    const int arraySize = 5;
    int myArray[arraySize];

    // Assigning values to the array elements
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = i * 2;  // Assigning even numbers
    }

    // Looping through the array elements and displaying them
    std::cout << "Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
