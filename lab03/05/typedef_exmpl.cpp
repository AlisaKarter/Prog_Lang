#include <iostream>
#include <vector>

typedef std::vector<int> IntVector;
typedef long long LL;

int main() {
    IntVector numbers = {1, 2, 3, 4, 5};
    LL number = 1000000000;
    
    std::cout << "Vector size: " << numbers.size() << std::endl;
    std::cout << "Number: " << number << std::endl;
}