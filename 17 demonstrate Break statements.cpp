#include <iostream>

int main() {
    // Demonstrate the use of the break statement

    for (int i = 1; i <= 10; ++i) {
        // If i is greater than 5, break out of the loop
        if (i > 5) {
            std::cout << "Breaking out of the loop at i = " << i << std::endl;
            break;
        }

        // Output the current value of i
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
