#include <iostream>
using namespace std;
int main() {
    int numbersCount;
    int numbersSum = 0;
    cin >> numbersCount;
    for(int i = 0; i < numbersCount; i++) {
        int number;
        cin >> number;
        if(number % 3 == 0) {
            numbersSum += number;
        }
    }
    cout << numbersSum << endl;
    return 0;
}
