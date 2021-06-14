#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int row, col;
    cin >> row;
    cin >> col;
    int **arr = new int* [row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    // заполнение
    for (int x = 0; x < row; x++) {
        for (int y = 0; y <col; y++) {
            arr[x][y] = rand() % 20;
        }
    }
    for (int g = 0; g < row; g++) {
        for (int h = 0; h < col; h++) {
            cout << arr[g][h] << "\t";
        }
    }
    for (int j = 0; j < row; j++) {
        delete [] arr[j];
    }
    delete [] arr;
    return 0;
}

