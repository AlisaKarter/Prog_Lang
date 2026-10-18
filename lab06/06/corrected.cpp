#include <iostream>
int main() {

    std::string a(100000, 'a');
    std::string b(100000, 'b');
    std::string c;
    for (int i=0; i<1000000; i++) {
        c = a;
        a = b;
        b = c;
    }
    std::cout << a[0] << b[0];
}
