#include <iostream>
#include <ostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;

void additon(int &a) {
    a += 2;
}
void multiplication(int & a) {
    a = a * 3;
}
int main() {
    std::vector<int> commands = {1, 2};
    std::vector<int> test = {};
    for(int k = 0; k < 4; k++) {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << commands[i] << commands[j];
            }
        }
        cout << endl;
    }
}
