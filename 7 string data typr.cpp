#include <iostream>
#include <string>

int main() {
    // Declare and initialize a string variable
    std::string myString = "Hello, ";

    // Concatenate another string to it
    myString += "World!";

    // Display the concatenated string
    std::cout << myString << std::endl;

    // Get the length of the string
    std::cout << "Length of the string: " << myString.length() << std::endl;

    // Access individual characters in the string
    char firstChar = myString[0];
    char lastChar = myString[myString.length() - 1];

    // Display the first and last characters
    std::cout << "First character: " << firstChar << std::endl;
    std::cout << "Last character: " << lastChar << std::endl;

    return 0;
}
