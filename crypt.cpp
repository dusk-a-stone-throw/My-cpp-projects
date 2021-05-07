#include <clocale>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// Прописные буквы в таблице с 97 по 122
int main() {
    setlocale(LC_ALL, "ru");
    int key;
    char word;
    cin >> key;
    cin >> word;
    // cout << (int)word << endl;
    if(int(word) <= (122 - key)) {
        cout << char(int(word) + key) << endl;
    }
    else {
        // cout << char(97 + key) << endl;
        cout << char ((key - (122 - int(word))) + 96) << endl; 
        // считаем от 96, т.к если считать он 97,
        // выводится на один символ больше (отсчет идет от "a", а "a" уже считается за первый символ
    }
    return 0;
}
