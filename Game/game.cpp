#include "game.h"
#include <conio.h>
#include <conio.h>
using std::cout;
using std::string;
using std::cin;
using std::endl;
class Warrior : public Character {
private:
    
};
int main() {
    setlocale(LC_ALL, "RU");
    string name;
    cout << "Добро пожаловать в игру." << endl;
    cout << "Введите имя персонажа:";
    cin >> name;
    int playerClass;
    cout << "Выберите класс персонажа (нажм. 1 для создания лучника,\n\
2 для создания воина, 3 для создания разбойника: )";
    playerClass = getch();
    cout << playerClass << endl;
    
    return 0;
}
