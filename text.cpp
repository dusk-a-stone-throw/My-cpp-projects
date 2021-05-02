//Project name: 
#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::ofstream;
using std::string;
int main() {
    std::ofstream out; // поток для записи
    //out.open("C:/Users/user/Desktop/test.txt", ios::app); // окрываем файл для записи
    if(out.is_open) {
        string a;
        cin >> a;
        out << a << endl;
    }
    return 0;
}