#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// динамический массив
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int size;
    cout << "¬ведите размер массива: ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 101) + 1;
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr + k  << endl;
    }
    delete [] arr;

    return 0;
}