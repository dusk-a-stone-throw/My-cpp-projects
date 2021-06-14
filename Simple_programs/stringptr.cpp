#include <iostream>
#include <cstring>
using namespace std;
void size(const char *string) {
    int i = 1;
    while(string[i] != '\0') {
        i++;

    }
    cout << i << endl;
}
int main() {
    const char string[] = {"hello"};
    cout << string << endl;
    cout << &string << endl;
    cout << "=========================" << endl;
    size(string);
    cout << "=========================" << endl;
    cout << strlen(string) << endl;
    cout << "=========================" << endl;
    return 0;
}