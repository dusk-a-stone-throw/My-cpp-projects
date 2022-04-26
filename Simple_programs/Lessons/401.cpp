#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int cars;
    float totalSpeed = 0;
    float speed;
    bool moreThan60 = false;
    cin >> cars;
    for(int i = 0; i < cars; i++) {
        cin >> speed;
        if(speed - int(speed) >= 0.5 && speed >= 1 && speed <= 300) {
            speed = int(speed) + 1;
        }
        if(speed >= 60) {
            moreThan60 = true;
        }
        totalSpeed += speed;
    }
    cout << fixed << setprecision(1) << totalSpeed / float(cars) << endl;
    if(moreThan60) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
