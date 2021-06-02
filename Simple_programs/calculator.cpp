#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::endl; 
int main(int argc, char *argv[]) {
    if(argc < 4) {
        cout << "Too few arguments." << endl;
    }
    else if(argc > 4) {
        cout << "Too many arguments." << endl;
    }
    else {
        std::string str = argv[1];
        int a = std::stoi(str);
        str = argv[3];
        int b = std::stoi(str);
        char action = (argv[2])[0];
        switch (action) {
            case '+': {
                cout << a + b << endl;
                break;
            }
            case '-': {
                cout << a - b << endl;
                break;
            }
            case '*': {
                cout << a * b << endl;
                break;
            }
            case '/': {
                cout << a / b << endl;
                break;
            }
            case '^': {
                cout << std::pow(a, b) << endl;
                break;
            }
            case '%': {
                cout << (b / 100) * a << endl;
                break;
            }
            case 'V': {
                cout << a * std::sqrt(b) << endl;
                break;
            }
        }
    }
    return 0;
}
