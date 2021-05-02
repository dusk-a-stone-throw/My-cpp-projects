#include <iostream>
#include <vector>
#include <ctime>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
void Copy(vector <int> field, vector <string>& opendField) {
    for (int i = 0; i < field.size(); i++) {
        if (field[i] == 1) {
            opendField[i] = "@";
        }
        else {
            opendField[i] = "o";
        }
    }
}

template<typename T>
void Print(vector <T> field) {
    for (int i = 0; i < 13; i++) {
        cout << "=";
    }
    cout << endl;
    int d = 1;
    for (int j = 0; j < field.size(); j++) {
        cout << "|" << field[j];
        if (d < 6) {
            d++;
        }
        else {
            cout << "|" << endl;
            d = 1;
        }
    }
    for (int i = 0; i < 13; i++) {
        cout << "=";
    }
    cout << endl;
}

void Generate(vector <int>& field, int bombs) {
    int bombsNum = 0;
    int temp2 = rand() % 10 + 1;
    while (bombsNum < bombs) {
        for (int i = 0; i < field.size(); i++) {
            int temp = rand() % 10 + 1;
            if (field[i] == 0) {
                if (temp != temp2) {
                    field[i] = 0;
                }
                else if ((temp == temp2) && (bombsNum < bombs)) {
                    field[i] = 1;
                    ++bombsNum;
                }
            }
            else {
                continue;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    SetConsoleOutputCP(1251);
    cout << "Угадывайте пустые ячейки, чтобы выиграть, но помните, что можете взорваться на мине." << endl;
    const int tiles = 36;
    while (true) {
        int bombs;
        bool lose = false;
        cout << "Введите кол-во бомб (от 2 до 35), введите 12345 чтобы выйти: ";
        cin >> bombs;
        if ((bombs < 2 && bombs != 12345) || \
            (bombs > 35 && bombs != 12345)) {
            cout << "Недопустимое число бомб" << endl;
        }
        else if (bombs == 12345) {
            cout << "Выход..." << endl;
            system("color 7");
            exit(0);
        }
        else {
            vector <int> field(tiles, 0);
            vector <string> openField(tiles, "*");
            Generate(field, bombs);
            Print(openField);
            cout << "Вводите по одному номера ячеек, которые хотите открыть. (от 1 до 36)." << endl;
            while (lose != true) {
                int userChouse = 0;
                cin >> userChouse;
                while ((userChouse < 1 || userChouse > 36) && userChouse != 12345) {
                    cout << "Недопустимое значение." << endl;
                    cin >> userChouse;
                    continue;
                }
                if (userChouse == 12345) {
                    lose = true;
                    system("cls");
                    system("color 7");
                    Copy(field, openField);
                    Print(openField);
                    cout << "Вы завершили игру." << endl;
                    system("pause");
                    system("cls");
                    break;
                }

                system("cls");
                int count = 0;
                if (field[userChouse - 1] != 1) {
                    openField[userChouse - 1] = "o";
                    system("color 2");
                    Print(openField);
                    for (int i = 0; i < field.size(); i++) {
                        if (openField[i] == "o") {
                            ++count;
                            if (count == (field.size() - bombs)) {
                                system("color 2");
                                Copy(field, openField);
                                Print(openField);
                                cout << "Вы дошли до конца!" << endl;
                                lose = true;
                                system("pause");
                                system("cls");
                                system("color 7");
                                break;
                            }
                        }
                    }
                }
                else {
                    lose = true;
                    system("cls");
                    system("color 4");
                    Copy(field, openField);
                    Print(openField);
                    system("pause");
                    system("cls");
                    system("color 7");
                }
            }
        }
    }
    return 0;
}
