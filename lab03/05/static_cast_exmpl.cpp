#include <iostream>

int main() {
    double pi = 3.14159;
    int x = static_cast<int>(pi);
    std::cout << pi << " " << x << std::endl;
    
    int a = 5, b = 2;
    double result = static_cast<double>(a) / b;
    std::cout << result << std::endl;
}