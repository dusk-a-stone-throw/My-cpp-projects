#include <cstdint>
#include <iostream>
#include <ctime>
using namespace std;
#define REQUIRED_NUMBER 19451945122
// 19451945122 = 105261^2 + 91499^2
int main() {
    clock_t start = clock();
    long long x   = 0;
    while(true) {
        for(long long y = 0; y <= x; y++) {
            if(x * x + y * y == REQUIRED_NUMBER) {
                cout << "x: " << x << " y: " << y << endl;
                break;
            }
            else if(x * x + y * y > REQUIRED_NUMBER) {
                break;
            }
            else {
                continue;
            }
        }
        if(x * x > REQUIRED_NUMBER) {
            break;
        }
        x++;
    }
    cout.precision(10);
    cout << float(clock() - start) / CLOCKS_PER_SEC << endl;
}
