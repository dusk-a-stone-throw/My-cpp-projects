#include <locale>
#include <iostream>
#include "Parsing.h"
using std::cout;
using std::endl;
using std::string;
int main(int argc, char *argv[]) {
    setlocale(LC_CTYPE, "");
    if(argc < 2) {
        cout << "Слишком мало аргументов." << endl;
    }
    else if(argc > 2) {
        cout << "Слишком много аргументов." << endl;
    }
    else {
        Parsing(argv[1]);
    }
    return 0;
}
