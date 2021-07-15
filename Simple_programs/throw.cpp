#include <exception>
#include <fstream>
#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::ifstream;
using std::exception;
class MyException : public exception {
private:
public:
    // MyException(const char *msg) : exception(msg) {
    // }
};


void Foo(int value) {
    if(value < 0) {
        throw std::logic_error("Value is lower ss 0");
    }
    if(value == 1) {
        throw MyException();
    }
    cout << "Value = " << value << endl;
}


int main() {
    try {
        Foo(1);
    }
    catch(const exception &ex) {
        cout << ex.what() << endl;
    }
    return 0;
}
