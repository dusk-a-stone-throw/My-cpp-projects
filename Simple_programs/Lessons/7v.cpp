#include <iostream>
using namespace std;
int main() {
    int number;
    int numbersSum   = 0;
    int numbersCount = 0;
    while(true) {
        cin >> number;
        if(number == 0) {
            break;
        }
        numbersCount++;
        if((number <= 256) && (number > 0) && (number % 2 == 0)) {
            numbersSum += number;
        }
    }
    cout << numbersCount << endl;
    cout << numbersSum << endl;
    return 0;
}
