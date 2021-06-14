#include <iostream>
#include <ctime>
using namespace std;
void fill(int *arr, const int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }

}
void print(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << i << ": " << arr[i] << "\t";
    }
}
/* void push_back(int *&arr, const int size, int value) {

} */
void clone(int *arr, int *arr2, int &size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[i];
    }
    cout << "elem num: " << size << endl;
    arr2[size] = size;
    /* for (int i = 0; i < size; i++) {
        cout << arr2[size - i] << endl;
    } */
    size++;
    cout << "size++" << endl;
    cout << "elem num: " << size << endl;
    delete[] arr;
    arr = arr2;
}
int main() {
    srand(time(0));
    int size = 6;
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    fill(arr1, size);
    cout << endl;
    cout << size << endl;
    //print(arr1, size);
    cout << endl;
    cout << size << endl;
    clone(arr1, arr2, size);
    cout << "clone" << endl;
    cout << size << endl;
    print(arr2, size);
    cout << endl;
    cout << size << endl;
    cout << "***************" << endl;
    //cout << arr2[1] << endl;
    delete[] arr2;
    return 0;
}