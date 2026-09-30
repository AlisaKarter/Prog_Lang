#include <iostream>

int main() {
    int x = 10;
    double y = 3.14;
    decltype(x) a = 20;
    decltype(y) b = 2.71;
    std::cout << a << " " << b << std::endl;
}