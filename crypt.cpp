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
        cout << "fuck you" << endl;
    }
    return 0;
}
