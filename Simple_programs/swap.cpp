#include <iostream>
#include <string>
using namespace std;
template <typename T1, typename T2>
void swap(T1 & a, T2 & b) {
    T1 c;
    a = c;
    b = a;
    c = b;
}
int main() {s
    swap(222, "ahaga");
    cout << "a " <<  a << "\t" << "b "<< b << endl;
}
