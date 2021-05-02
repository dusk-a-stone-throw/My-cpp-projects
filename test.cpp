#include <clocale>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main() {
    setlocale(LC_ALL, "ru" );
    double a, b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    if(a > b ) {
        cout << "a > b в " << a / b << " раз(a)." << endl;
    }
    else {
        cout << "b > a в " << b / a << " раз(a)." << endl; 
    }
    return 0;
}
