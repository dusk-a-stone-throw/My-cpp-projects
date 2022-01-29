#include <iostream>
using namespace std;
int main() {
    int numbersCount;
    int minimalNumber = 30001;
    cin >> numbersCount;
    for(int i = 0; i < numbersCount; i++) {
        int number;
        cin >> number;
        if(number <= 30000) {
            if((number % 2) == 0 && (number <= minimalNumber)) {
                minimalNumber = number;
            }
            else {
                continue;
            }
        }
    }
    cout << minimalNumber << endl;
    return 0;
}
