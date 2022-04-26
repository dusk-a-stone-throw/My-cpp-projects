#include <iostream>
using namespace std;
int main() {
    int days;
    int temp;
    int min;
    bool less = false;
    cin >> days;
    cin >> temp;
    min = temp;
    for(int i = 1; i < days; i++) {
        cin >> temp;
        if(temp < min) {
            min = temp;
        }
        if(temp < -15) {
            less = true;
        }
    }
    cout << min << endl;
    if(less) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
