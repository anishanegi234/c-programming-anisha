#include <iostream>

int main() {
    // Declare and initialize two boolean variables
    bool condition1 = true;
    bool condition2 = false;

    // Logical AND
    bool andResult = condition1 && condition2;
    std::cout << "Logical AND: " << andResult << std::endl;

    // Logical OR
    bool orResult = condition1 || condition2;
    std::cout << "Logical OR: " << orResult << std::endl;

    // Logical NOT
    bool notResult1 = !condition1;
    bool notResult2 = !condition2;
    std::cout << "Logical NOT of condition1: " << notResult1 << std::endl;
    std::cout << "Logical NOT of condition2: " << notResult2 << std::endl;

    return 0;
}
