#include <iostream>
using namespace std;
int main() {
    long long preprevious = 1;
    long long previous    = 1;
    int i                 = 0;
    while(i < 20) {
        int current = preprevious + previous;
        cout << current << endl;
        // cin.get();
        // cout << "Pre: " << previous << " Prepre: " << preprevious << endl;
        preprevious = previous;
        previous    = current;
        current     = current + previous;
        // cout << "Pre: " << previous << " Prepre: " << preprevious << endl;
        // cin.get();
        i++;
    }
}

