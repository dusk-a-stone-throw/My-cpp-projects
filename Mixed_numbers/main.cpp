#include <iostream>
#include "mixed.hpp"
int main() {
    Mixed a(1, -1, -2);
    a.simplify();
    // std::cout << a.getInteger() << " " << a.getNumerator() << "/" << a.getDenumerator() << std::endl;
    // Mixed b(0, 1, 2);
    // Mixed c(1, 6, 5);
    // Mixed e(1, 10, 2);
    // Mixed d = a / b;
    // Mixed f = c + e;
    // std::cout << d.getInteger() << " " << d.getNumerator() << "/" << d.getDenumerator() << std::endl;
    // // c.convertToMixed();
    // // std::cout << c.getInteger() << " " << c.getNumerator() << "/" << c.getDenumerator() << std::endl;
    // std::cout << f.getInteger() << " " << f.getNumerator() << "/" << f.getDenumerator() << std::endl;
}
