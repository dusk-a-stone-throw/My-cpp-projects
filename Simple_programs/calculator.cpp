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
        double a        = std::stod(str);
        str             = argv[3];
        double b        = std::stod(str);
        char action     = (argv[2])[0];
        switch(action) {
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
                if(b == 0)
                    cout << "ERROR" << endl;
                else
                    cout << a / b << endl;
                break;
            }
            case '^': {
                cout << std::pow(a, int(b)) << endl;
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
            default:
                cout << "INCORRECT OPERATION" << endl;
        }
    }
    return 0;
}
