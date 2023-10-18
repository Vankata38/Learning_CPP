#include <iostream>

void testStrings() {

    const char* string = "Test";
    std::cout << string << std::endl;

    // If u want to combine two string you either do that or go on the next line and do +=
    std::string myName = std::string("Ivan") + " Terziev";
    std::cout << myName << std::endl;

    bool constains = myName.find("Iv") != std::string::npos;
    std::cout << constains << std::endl;
}