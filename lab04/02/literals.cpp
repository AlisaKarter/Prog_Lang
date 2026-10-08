#include <iostream>

int main() {
    int dec = 42;

    int oct = 052;

    int hex = 0x2A;

    int bin = 0b101010;

    long long big = 1'000'000'000LL;

    unsigned int u = 100U;

    long l = 123456789L;

    long long ll = 1234567890123LL;
    
    std::cout << "dec = " << dec << std::endl;
    std::cout << "oct = " << oct << std::endl;
    std::cout << "hex = " << hex << std::endl;
    std::cout << "bin = " << bin << std::endl;
    std::cout << "big = " << big << std::endl;
    std::cout << "u = " << u << std::endl;
    std::cout << "l = " << l << std::endl;
    std::cout << "ll = " << ll;
}
