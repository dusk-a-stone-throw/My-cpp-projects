#include <iostream>
#include "parsing.cpp"
using std::cout;
using std::endl;
using std::string;
int main(int argc, char *argv[]) {
    cout << argv[1] << endl;
    cout << parsing("z") << endl;
    return 0;
}
