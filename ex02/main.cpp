#include <iostream>

int main() {
    std::string  string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "address of strng     : " << &string << std::endl;
    std::cout << "address of stringPTR : " << &stringPTR << std::endl;
    std::cout << "address of stringREF : " << &stringREF << std::endl;
    std::cout << "value of the string variable      : " << string << std::endl;
    std::cout << "value pointed to by stringPTR     : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}