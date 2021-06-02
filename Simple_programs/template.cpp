#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 Sum(T1 a, T2 b) {
    return  a + b;
}
int main() {
    setlocale(LC_ALL, "Russian");
    cout << endl;
    cout << Sum(33, 131) << endl;
    return 0;
}
