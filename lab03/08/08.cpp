#include <iostream>

int main() {
    int x1 = 5, y1 = 5, z1 = 10;
    std::cout << "Случай 1 (x=y, x!=z): " 
              << ((x1 == y1) + (x1 == z1) == true) << std::endl;
    
    int x2 = 5, y2 = 10, z2 = 5;
    std::cout << "Случай 2 (x!=y, x=z): " 
              << ((x2 == y2) + (x2 == z2) == true) << std::endl;

    int x3 = 5, y3 = 5, z3 = 5;
    std::cout << "Случай 3 (x=y=z): " 
              << ((x3 == y3) + (x3 == z3) == true) << std::endl;

    int x4 = 5, y4 = 10, z4 = 15;
    std::cout << "Случай 4 (x!=y, x!=z): " 
              << ((x4 == y4) + (x4 == z4) == true) << std::endl;
}
