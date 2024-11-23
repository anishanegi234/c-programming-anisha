#include <iostream>
#include <string>

int main() {
    // Declare and initialize a string
    std::string myString = "Hello, World!";

    // strlen() equivalent for C++ strings
    std::cout << "Length of the string: " << myString.length() << std::endl;

    // tolower() and toupper()
    for (char &c : myString) {
        c = std::tolower(c); // Convert to lowercase
    }
    std::cout << "String in lowercase: " << myString << std::endl;

    for (char &c : myString) {
        c = std::toupper(c); // Convert to uppercase
    }
    std::cout << "String in uppercase: " << myString << std::endl;

    // islower() and isupper()
    std::cout << "Is the first character a lowercase letter? " << std::boolalpha << std::islower(myString[0]) << std::endl;
    std::cout << "Is the first character an uppercase letter? " << std::boolalpha << std::isupper(myString[0]) << std::endl;

    // at()
    char atCharacter = myString.at(7); // Access the character at index 7
    std::cout << "Character at index 7: " << atCharacter << std::endl;

    // isalpha() and isdigit()
    std::cout << "Is the first character an alphabetic character? " << std::boolalpha << std::isalpha(myString[0]) << std::endl;
    std::cout << "Is the first character a digit? " << std::boolalpha << std::isdigit(myString[0]) << std::endl;

    // atoi(), atol(), atof()
    std::string numericString = "123";
    int intValue = std::stoi(numericString);
    long long longValue = std::stoll(numericString);
    float floatValue = std::stof(numericString);
    double doubleValue = std::stod(numericString);

    std::cout << "Converted integer value: " << intValue << std::endl;
    std::cout << "Converted long long value: " << longValue << std::endl;
    std::cout << "Converted float value: " << floatValue << std::endl;
    std::cout << "Converted double value: " << doubleValue << std::endl;

    // length()
    std::cout << "Length of the string using length(): " << myString.length() << std::endl;

    // insert() and erase()
    myString.insert(5, " C++"); // Insert " C++" at index 5
    std::cout << "String after insertion: " << myString << std::endl;

    myString.erase(5, 4); // Erase 4 characters starting from index 5
    std::cout << "String after erasure: " << myString << std::endl;

    // compare()
    std::string compareString = "HELLO, World!";
    if (myString.compare(compareString) == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }

    // substr()
    std::string substring = myString.substr(0, 5); // Extract substring from index 0 to 4
    std::cout << "Substring: " << substring << std::endl;

    return 0;
}
