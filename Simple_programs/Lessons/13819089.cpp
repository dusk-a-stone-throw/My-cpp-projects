#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num   = 0;
    int sum   = 0;
    int count = 0;
    while(true) {
        cin >> num;
        if(num == 0) {
            break;
        }
        if(num % 8 == 0) {
            sum += num;
            count++;
        }
    }
    if(sum == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << fixed << setprecision(1) << float(sum) / count << endl;
    }
}
