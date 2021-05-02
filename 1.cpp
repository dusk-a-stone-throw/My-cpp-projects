#include <iostream>
#include <windows.h>
using namespace std;
void foo() {
    cout << "\n\n\n\n\t\t\t\t $$$$$$$$$$$\n\
\t\t\t        $$$$$$$$$$$$$\n\
\t\t\t       $$$$$$$$$$$$$$$\n\
\t\t\t      $$$$$$$$$$$$$$$$$\n\
\t\t\t      $$$$$$$$$$$$$$$$$\n\
\t\t\t      $$$$$$$$$$$$$$$$$\n\
\t\t\t      $$$$$##$$$##$$$$$\n\
\t\t\t      $$$$$##$$$##$$$$$\n\
\t\t\t       $$$$$$$$$$$$$$$\n\
\t\t\t        $$$$$$$$$$$$$\n\
\t\t\t        $$$$$$$$$$$$$\n\
\t\t\t          $$$$$$$$$\n\
\t\t\t          $$$$$$$$$\n\
\t\t\t   $$$     $$$$$$$     $$$\n\
\t\t\t   $$$$$    $$$$$    $$$$$\n\
\t\t\t   $$$$$$$         $$$$$$$\n\
\t\t\t   $$$$$$$$$$$$$$$$$$$$$$$\n\
\t\t\t   $$$$$$$$$$$$$$$$$$$$$$$\n\
\t\t\t          $$$$$$$$$\n\
\t\t\t        $$$$$$$$$$$$$\n\
\t\t\t     $$$$$$$$$$ $$$$$$$$$$\n\
\t\t\t   $$$$$$$$$$     $$$$$$$$$$\n\
\t\t\t   $$$$$$$$         $$$$$$$$\n\
\t\t\t   $$$$$$$           $$$$$$$\n\
\t\t\t      $$$             $$$" << endl;
}
void hack() {
    system("color 4");
    foo();
    Sleep(1000);
    system("cls");
    foo();
    Sleep(2000);
    system("cls");
}
int main() {
    system("title ????");
    setlocale(LC_ALL, "Russian");
    system("mode con cols=95 lines=35");
    Sleep(2000);
    hack();
    hack();
    cout <<"DOWLOADING..." << endl;
    Sleep(1500);
    hack();
    cout << "GETTING ACCESS TO YOUR DISK C..." << endl;
    Sleep(1000);
    cout << "SUCCESS!" <<endl;
    Sleep(1000);
    cout << "Your PC has been hacked by anonymus" << endl;
    cout << "ALL data will be destroyed in: " << endl;
    for (int i = 3; i > 0; i--) {
        cout << i << " sec" << endl;
        Sleep(1000);
        cout << char(7) << endl;
        system("cls");
    }
    cout << "oh..." << endl;
    system("shutdown -p");
    system("pause");
    return 0;
}
