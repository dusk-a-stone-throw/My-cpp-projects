#include <iostream>
using namespace std;
int main() {
    int a, b, count;
    cin >> a;
    cin >> b;
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;
}
