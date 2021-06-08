#include <cstdlib>
#include <iostream>
#include "figure.h"
#include "drawBoard.h"
#include "move.h"
#include "isWin.h"
using std::cout;
using std::endl;
using std::cin;
char changeTurn(char turn) {
    if(turn == 'X') {
        return 'O';
    }
    else
        return 'X';
}
bool isFull(Figure board[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j].GetType() == ' ') {
                return false;
                }
            else {
                continue;
            }
        }
    }
    return true;
}
int main() {
    Figure board[3][3];
    char turn = 'X';
    int x = 1;
    int y = 1;
    char key;
   
    while(!isWin(board)) {
        cout << isFull(board) << endl;
        cin.get();
        // turn = changeTurn(turn);
        system("clear");
        key = '?';
        char temp = board[y][x].GetType();
        board[y][x].SetType('*');
        drawBoard(board);
        board[y][x].SetType(temp);
        while(key != 'q') {
            system("stty raw");
            key = getchar();
            system("stty cooked");
            system("clear");
            move(board, x, y, key, turn);
        }
        x = y = 1;
    }
    cout << turn << " win." << endl;
    return 0;
}

