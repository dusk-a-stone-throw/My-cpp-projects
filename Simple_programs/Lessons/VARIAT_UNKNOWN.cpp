#include <iostream>
using namespace std;
int main() {
    int daysCount;
    int temperature;
    int minimalTemperature = 0;
    bool isTemperatureLow;
    bool flag = false;
    cin >> daysCount;
    for(int i = 0; i < daysCount; i++) {
        cin >> temperature;
        if(flag == false) {
            minimalTemperature = temperature;
            flag               = true;
        }
        if(temperature < -15) {
            isTemperatureLow = true;
        }
        if(temperature < minimalTemperature) {
            minimalTemperature = temperature;
        }
    }
    cout << minimalTemperature << endl;
    if(isTemperatureLow) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
