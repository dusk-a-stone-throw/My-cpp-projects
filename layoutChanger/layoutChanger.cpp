#include <clocale>
#include <iostream>
#include "parsing.cpp"
using std::cout;
using std::endl;
using std::string;
int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "ru");
    cout << parsing("zzz") << endl;
    return 0;
}
