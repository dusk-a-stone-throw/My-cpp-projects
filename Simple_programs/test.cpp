#include <cstdint>
#include <iostream>
#include <ctime>
#include <type_traits>
using namespace std;
// FOR EXAMPLE AND TESTS: 19451945122 = 105261^2 + 91499^2
int main() {
    clock_t start = clock();
    long long x   = 0;
    long long requiredNumber;
    cin >> requiredNumber;
    while(true) {
        for(long long y = 0; y <= x; y++) {
            if(x * x + y * y == requiredNumber) {
                cout << "x: " << x << " y: " << y << endl;
                break;
            }
            else if(x * x + y * y > requiredNumber) {
                break;
            }
            else {
                continue;
            }
        }
        if(x * x > requiredNumber) {
            break;
        }
        x++;
    }
    cout.precision(10);
    cout << float(clock() - start) / CLOCKS_PER_SEC << endl;
}
