#include <iostream>

// Function declaration with parameters
void displayMessage(std::string message, int repeatCount) {
    for (int i = 0; i < repeatCount; ++i) {
        std::cout << message << std::endl;
    }
}

int main() {
    // Calling the function with arguments
    displayMessage("Hello, World!", 3);

    return 0;
}
