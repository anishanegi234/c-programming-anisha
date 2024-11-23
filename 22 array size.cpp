#include <iostream>

int main() {
    // Omitting the array size during initialization
    int myArray[] = {1, 2, 3, 4, 5};  // Compiler determines the size as 5

    // Determining the size of the array
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Looping through the array elements and displaying them
    std::cout << "Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
