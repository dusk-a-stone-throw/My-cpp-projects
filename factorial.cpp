#include <iostream>
using namespace std;
//N! = N *(N-1)!
int Fact(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    return x * Fact(x - 1);

}
int main() {
    cout << Fact(25) << endl;
    system("pause");
}