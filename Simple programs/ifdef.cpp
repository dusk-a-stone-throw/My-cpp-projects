#include <iostream>

int main() {
#ifndef python
    std::cout << "Pi: " << std::endl;
    std::cout << 3.13 << std::endl;
    std::cout << std::endl;
    system("pause");
    return 0;
#endif
}