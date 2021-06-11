#include <fstream>
#include <iostream>
using std::cout;
using std::endl;
using std::ifstream;
void Foo(int value) {
    cout << "Value: " << value << endl;
}
int main() {
    Foo(55);
    return 0;
}
