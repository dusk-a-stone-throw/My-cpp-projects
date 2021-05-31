#include <locale>
#include <iostream>
#include "parsing.cpp"
using std::cout;
using std::endl;
using std::string;
int main(int argc, char *argv[]) {
    setlocale(LC_CTYPE, "");
    parsing(argv[1]);
    cout << endl;
    return 0;
}
