#include <iostream>
#include <string>

int main() {
    // Declare variables to store user input
    std::string name;
    int age;

    // Prompt the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Prompt the user for their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Display the received information
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
