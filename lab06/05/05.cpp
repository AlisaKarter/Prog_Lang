#include <iostream>

namespace A {
    int x = 10;
}

namespace B {
    int x = 20;
}

namespace C {
    int x = 30;
}

namespace D {
    int x = 40;
}

int main() {
    std::cout << A::x << std::endl;  // выведет 10
    std::cout << B::x << std::endl;  // выведет 20
    std::cout << C::x << std::endl;  // выведет 30
    std::cout << D::x << std::endl;  // выведет 40
}
