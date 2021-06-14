#include <iostream>
using namespace std;

int main() { 
    int a = 5;
    int *pa = new int(a); 
    cout << pa << endl;
    cout << *pa << endl;
    delete pa;
    pa = nullptr;
    if(pa != NULL) {
        cout << pa << endl;
    }
    delete pa;
    return 0;
}