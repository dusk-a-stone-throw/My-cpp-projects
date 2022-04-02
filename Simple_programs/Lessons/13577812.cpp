#include <iostream>
using namespace std;
int main() {
    int students;
    int solved;
    bool isMax = false;
    int bad    = 0;
    cin >> students;
    for(int i = 0; i < students; i++) {
        cin >> solved;
        if(solved < 5) {
            bad++;
        }
        else if(solved == 10) {
            isMax = true;
        }
        else {
        }
    }
    cout << bad << endl;
    if(isMax) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
