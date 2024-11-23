#include <iostream>

// Function to swap two integers using references
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // Initializing two integers
    int x = 5, y = 10;

    // Displaying the values before swapping
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Calling the swap function with references
    swap(x, y);

    // Displaying the values after swapping
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
