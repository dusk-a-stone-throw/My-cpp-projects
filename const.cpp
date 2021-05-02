#include <iostream>
#include <ctime>
using namespace std;
void fillfirst(int* arr1, const int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] = rand() % 20;
    }
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << endl;
    }
}
void fillsecond(int* arr2, const int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = rand() % 20;
    }
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << endl;
    }
}
int main() {
    int size = 6;
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    srand(time(NULL));
    cout << "*****************" << endl;
    fillfirst(arr1, size);
    cout << "*****************" << endl;
    fillsecond(arr2, size);
    cout << "*****************" << endl;
    delete[] arr1;
    arr1 = new int[size];
    for (int i = 0; i < size; i++) {
        arr1[i] = arr2[i];
    }
    cout << "second arr" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << endl;
    }
    cout << "first arr" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << endl;
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}
