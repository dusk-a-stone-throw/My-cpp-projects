#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// Прописные en буквы в таблице с 97 по 122
// Заглавные en буквы в таблице с 65 по 90
void encrypt(string word, int key) { // Шифрование
    for(int i = 0; i < word.size(); i++) {
        if(int(word[i]) < 65 || int(word[i]) > 122) { // Фильтруем не буквы
            cout << word[i];
        }
        else if(int(word[i]) >= 97 && int(word[i]) <= 122) { // Если буква прописная
            if(int(word[i]) == 32) {
                cout << " ";
            }
            else if(int(word[i]) <= (122 - key)) { // если не надо идти в начало
                cout << char(int(word[i]) + key);
            }
            else {
                cout << char ((key - (122 - int(word[i])) - 1) + 97); // a уже считается за первый символ, поэтому - 1
            }
        }
        else { // Если заглавная
            if (int(word[i]) <= (90 - key)) {
                cout << char(int(word[i]) + key);
            }
            else if(int(word[i]) == 32) { // 32 - это пробел
                cout << " ";
            }
            else {
                cout << char ((key - (90 - int(word[i])) - 1) + 65);
                // a уже считается за первый символ, поэтому - 1
            }
        }
    }
cout << endl;
}
void decrypt(string word, int key) {
    for(int i = 0; i < word.size(); i++) {
        if(int(word[i]) == 32) {
            cout << " ";
        }

        else if(int(word[i]) < 65 || int(word[i]) > 122) {
            cout << word[i];
        }

        else {
            cout << char(int(word[i]) - key);
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    cout << "Welcome to Ceasar Cipher decrypter/encrypter." << endl;
    int key;
    string word;
    char choise = 0;
    while(choise != 3) {
        cout << "Enter a key: ";
        cin >> key;
        if(key > 26 || key < 0) { //Ключ не может быть больше кол-ва букв в алфавите.
            cout << "The key cannot be more or less than the number of letters in the alphabet." << endl << endl;
        }
        else {
            cin.ignore(INT32_MAX, '\n');
            cout << "Enter a phrase: ";
            std::getline(cin, word);
            cout << "Enter 1 to ENCRYPT your phrase, 2 to DECRYPT, 3 to EXIT: ";
            cin >> choise;
            switch (choise) {
                case '1': {
                    encrypt(word, key);
                    break;
                }
                case '2': {
                    decrypt(word, key);
                    break;
                }
                case '3': {
                    cout << "Thanks for using" << endl;
                    exit(0);
                    break;
                }
                default: {
                    cout << "Incorrect enter" << endl;
                }
            }
        }
    }
    return 0;
}
