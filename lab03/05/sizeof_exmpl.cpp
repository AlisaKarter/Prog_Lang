#include <iostream>

int main() {
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    
    int x = 42;
    std::cout << "x: " << sizeof(x) << std::endl;
}