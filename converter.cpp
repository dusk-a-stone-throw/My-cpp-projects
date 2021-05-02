#include <iostream>
#include <cstdlib>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
string Swap(string i) {
    if(i == "q") {
        return "é";
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    string a;
    std::getline(cin, a);
    int i = 0;
    while(a[i] != '\0') {
        string temp = a[i];
        cout << Swap(a[i]);
        ++i;
    }
    return 0;
}
