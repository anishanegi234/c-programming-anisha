#include <iostream>
#include <string>

int main() {
    // Declaration and Initialization
    std::string greeting = "Hello, ";
    std::string name;

    // Input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Concatenation
    std::string fullGreeting = greeting + name;

    // Output
    std::cout << "Full Greeting: " << fullGreeting << std::endl;

    // String Length
    std::cout << "Length of the greeting: " << fullGreeting.length() << " characters" << std::endl;

    // Accessing individual characters
    std::cout << "First character: " << fullGreeting[0] << std::endl;

    // Substring
    std::string substring = fullGreeting.substr(7, 5);
    std::cout << "Substring: " << substring << std::endl;

    // Finding a substring
    size_t position = fullGreeting.find("world");
    if (position != std::string::npos) {
        std::cout << "Substring 'world' found at position: " << position << std::endl;
    } else {
        std::cout << "Substring 'world' not found." << std::endl;
    }

    return 0;
}
