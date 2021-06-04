#include <iostream>
#include <ncurses.h>
#include "figure.cpp"
#include "drawBoard.cpp"
using std::cout;
using std::endl;
using std::cin;
int main() {
    Figure board[3][3];
    drawBoard(board);
    return 0;
}
