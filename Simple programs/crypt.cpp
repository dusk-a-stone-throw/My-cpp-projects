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
            if(int(word[i]) <= (122 - key)) { // если не надо идти в начало
                cout << char(int(word[i]) + key);
            }
            else {
                cout << char ((key - (122 - int(word[i])) - 1) + 97); // a уже считается за первый символ, поэтому - 1
            }
        }
        else { // Если заглавная
            if(int(word[i]) <= (90 - key)) { // если не надо идти в начало
                cout << char(int(word[i]) + key);
            }
            else {
                cout << char ((key - (90 - int(word[i])) - 1) + 65);
            }
        }
    }
cout << endl;
}
void decrypt(string word, int key) {
    for(int i = 0; i < word.size(); i++) {
        if(int(word[i]) < 65 || int(word[i]) > 122) {
            cout << word[i];
        }
        else if(int(word[i]) >= 97 && int(word[i]) <= 122) { // Если буква прописная
            if(int(word[i]) <= 122 - (26 - key)) { // если не надо идти в начало
                cout << char(int(word[i]) + (26 - key));
            }
            else {
                cout << char(int(word[i]) -  key);
            }
            // else {
            //     cout << char ((key - (122 - int(word[i])) - 1) + 97); // a уже считается за первый символ, поэтому - 1
            // }
        }
        else { // Если заглавная
            if(int(word[i]) <= 90 - (26 - key)) { // если не надо идти в начало
                cout << char(int(word[i]) + (26 - key));
            }
            else {
                cout << char(int(word[i]) - key);
            }
        }
    }
    cout << endl;
}
void bruteForce(string word) { // Перебираем фразу всеми ключами, от 1 до 25 (0 и 26 не влияют на текст)
    for(int j = 1; j < 26; j++) {
        for(int i = 0; i < word.size(); i++) {
            if(int(word[i]) < 65 || int(word[i]) > 122) {
            cout << word[i];
            }
            else if(int(word[i]) >= 97 && int(word[i]) <= 122) { // Если буква прописная
                if(int(word[i]) <= 122 - (26 - j)) { // если не надо идти в начало
                    cout << char(int(word[i]) + (26 - j));
                }
                else {
                    cout << char(int(word[i]) - j);
                }
                // else {
                //     cout << char ((key - (122 - int(word[i])) - 1) + 97); // a уже считается за первый символ, поэтому - 1
                // }
            }
            else { // Если заглавная
                if(int(word[i]) <= 90 - (26 - j)) { // если не надо идти в начало
                    cout << char(int(word[i]) + (26 - j));
                }
                else {
                    cout << char(int(word[i]) - j);
                }
            } 
        }
        cout << endl << endl;
    }
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
            cout << "Enter 1 to ENCRYPT your phrase, 2 to DECRYPT, 3 to EXIT, 4 to MATCH your phrase with BRUTE FORCE METHOD: ";
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
                case '4': {
                    bruteForce(word);
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
