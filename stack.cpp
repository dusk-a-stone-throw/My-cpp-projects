#include <iostream>
using namespace std;
int Foo(int a) {
    if (a >=1) {
        cout << a << endl;
        a--;
        return Foo(a);
    }
    else {
        return 0;
    }
    



}
int main() {
    setlocale(LC_ALL, "Russian");
    Foo(10);
    system("pause");
    return 0;
}