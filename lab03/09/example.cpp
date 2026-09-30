#include <iostream>
int main() {
    int x = 5, y = 5, z = 1;
    std::cout << (x == y == z) << std::endl;
    
    x = 5; y = 3; z = 0;
    std::cout << (x == y == z) << std::endl;
    
    x = 5; y = 5; z = 5;
    std::cout << (x == y == z) << std::endl;
}
