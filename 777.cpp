#include <iostream>
#include <ctime>
#include <conio.h>
#include <cmath>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
void ShowTime() {
    time_t t = time(NULL);
     cout << "Текущая дата и время: " << ctime(&t) << endl;
}
double Calc(int op, double first, double second) {
    switch(op) {
        case 49:
            return first + second;
            break;
        case 50:
            return first - second;
            break;
        case 51:
            return first * second;
            break;
        case 52:
            return first / second;
            break;
        case 53:
            return pow(first, second);
            break;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int choise = 0;
    while(choise != 48) {
        choise = getch();
        cout << choise << endl;
        switch(choise) {
            case 49:
                ShowTime();
                break;
            case 50:
                int op;
                double first, second;
                while(op != 55) {
                    system("color 7");
                    cout << "Нажмите на кнопку, выберите нужное действие(1 - \"+\", 2 - \"-\",\
3 - \"*\", 4 - \"/\", 5 - \"^\", 6 - \"Корень\"), 7 - выйти: ";
                    op = getch();
                    cout << endl;
                    if (op == 55) {
                        cout << "Выход..." << endl;
                        break;
                    }
                    else if(op == 54) {
                        cout << "Введите число: ";
                        cin >> first;
                        cout << "Его корень: ";
                        cout << sqrt(first) << endl;
                        break;
                    }
                    else {
                        cout << "Введите первое число: ";
                        cin >> first;
                        cout << "Введите второе число: ";
                        cin >> second;
                            if(op == 52 && second == 0) {
                                system("color 4");
                                cout << "Деление на 0 невозможно!" << endl;
                            }
                            else {
                                cout << "Результат: " << Calc(op, first, second) << endl;
                            }
                    }
                }
                break;
        }
    }
    return 0;
}
