#include <iostream>
#include <fstream>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ios;
class Point {
private:
    int x;
    int y;
    int z;
public:
    Point(int valueX, int valueY, int valueZ) {
        x = valueX;
        y = valueY;
        z = valueZ;
    }
    Point() {
        y = z = x = 0;
    }
    void Print() {
        cout << " X: " << x << " Y: " << y << " Z: " << z << endl;
    }
};
int main() {
    setlocale(LC_ALL, "ru");
    string path = "$HOME/Desktop/myFile.txt";
    // std::ofstream fout;
    // fout.open(path, ios::app);
    // cout << fout.is_open() << endl;
    // string a;
    // cout << "Введите слово: ";
    // cin >> a;
    // fout << a;
    // fout << '\n';
    // fout.close();
    // system("cls");
    // std::ifstream fin;
    // fin.open(path);
    // if(!(fin.is_open())) {
    //     cout << "Не удалось открыть файл" << endl;
    //     exit(1);
    // }
    // else {
    //     cout << "Файл открыт." << endl;
    //     string str;
    //     while(!fin.eof()) { // пока он возвращает true
    //         str = "";
    //         std::getline(fin, str); // fin - откуда будем считывать, str - куда будем записывать
    //         cout << str << endl;
    //     }
    // }
    // fin.close();
    Point point
    return 0;
}
