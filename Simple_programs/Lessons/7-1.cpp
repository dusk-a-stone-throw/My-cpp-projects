#include <iostream>
using namespace std;
int main() {
    int a, b;
    int count = 0;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> b;
        if(b % 3 == 0) {
            count += b;
        }
    }
    cout << count << endl;
}
