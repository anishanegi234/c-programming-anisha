#include <iostream>

int main() {
    // Demonstrate the use of the continue statement

    for (int i = 1; i <= 5; ++i) {
        // If i is equal to 3, skip the current iteration using continue
        if (i == 3) {
            std::cout << "Skipping iteration at i = " << i << std::endl;
            continue;
        }

        // Output the current value of i
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
