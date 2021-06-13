#include <exception>
#include <fstream>
#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::ifstream;
using std::exception;
void Foo(int value) {
    if(value < 0) {
        throw std::logic_error("Value is lower than 0");
    }

    cout << "Value = " << value << endl;
}
int main() {
    try {
        Foo(-55);
    }

    catch(const exception &ex) {
        cout << ex.what() << endl;
    }
    return 0;
}
