#include <iostream>

int main() {
    int x, y, z;

    x = 1; y = 1; z = 0;
    z = z + 2 * (x + 1) + 3 * y, y++, x++;
    std::cout << "Постфикс: x=" << x << " y=" << y << " z=" << z << std::endl;

    x = 1; y = 1; z = 0;
    z = z + 2 * (++x) + 3 * y, ++y;
    std::cout << "Префикс: x=" << x << " y=" << y << " z=" << z << std::endl;

    x = 1; y = 1; z = 0;
    ++x, z = z + 2 * x + 3 * y, ++y;
    std::cout << "Запятая: x=" << x << " y=" << y << " z=" << z << std::endl;
}
