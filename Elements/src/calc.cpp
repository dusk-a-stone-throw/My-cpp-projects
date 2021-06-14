#include <iostream>
#include <cmath>
#include "mainClass.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать!" << endl;
    while(true) {
        int menu;
        cout << "Выберите пункт меню: 1 - поиск по символу," << endl;
        cout << "2 - поиск по номеру, 3 - поиск по названию на латыни," << endl;
        cout << "4 - поиск по массе, 5 - поиск по названию на русском," << endl;
        cout << "6 - вывести все элементы. (Введите 12345, чтобы выйти): " << endl;
        cin >> menu;
        switch (menu) {
            case 1: { // Поиск по символу
                string a;
                cin >> a;
                bool search = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i - 1].GetSymbol() == a) && (search == true)) {
                        table[i - 1].PrintElem();
                        search = false;
                    }
                }
                if(search == true) {
                    cout << "Элемент не найден." << endl;
                }
                break;
            }
            case 2: { // По номеру
                int a;
                cin >> a;
                if(a <=0 || a > 118) {
                    cout << "Элемент не найден." << endl;
                }
                else {
                    table[a - 1].PrintElem();
                }
                break;
            }
            case 3: { // По названию на латыни
                string c;
                cin >> c;
                bool search2 = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i].GetLatin() == c) && (search2 == true)) {
                        table[i].PrintElem();
                        search2 = false;
                    }
                }
                if(search2 == true) {
                    cout << "Элемент не найден." << endl;
                }
                break;
            }
            case 4: { // По массе
                double c;
                cin >> c;
                bool search5 = true;
                cout << "Найдены элементы:" << endl;
                for(int i = 0; i < table.size(); i++) {
                    if (int(round(table[i].GetMass()) == int(c))) {
                        table[i].PrintElem();
                        search5 = false;
                    }
                }
                if(search5 == true) {
                    cout << "Элементы не найдены." << endl;
                }
                break;
            }
            case 5: { // По русскому названию
                string b;
                cin >> b;
                bool search3 = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i].GetName() == b) && (search3 == true)) {
                        table[i].PrintElem();
                        search3 = false;
                    }
                }
                if(search3 == true) {
                    cout << "Элемент не найден." << endl;
                }
                break;
            }
            case 6: { // Все элементы
                for(int i = 1; i < table.size(); i++) {
                    table[i].PrintElem();
                }
                break;
            }
            case 12345:
                cout << "Выход." << endl;
                return 0;
            default:
                cout << "Команда не найдена." << endl;
        }
    }
    return 0;
}
