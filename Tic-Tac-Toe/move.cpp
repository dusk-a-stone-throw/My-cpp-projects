#include "figure.h"
#include "drawBoard.h"
#include "isWin.h"
#include <iostream>
void move(Figure board[3][3], int &x, int &y, char key, char &turn) {
    if(key == 'w') {
        if (y > 0)
            --y;
       else {}
       char temp = board[y][x].GetType();
       board[y][x].SetType('*');
       drawBoard(board);
       board[y][x].SetType(temp);
    }
    else if(key == 's') {
        if (y < 2)
            ++y;
        else {}
        char temp = board[y][x].GetType();
        board[y][x].SetType('*');
        drawBoard(board);
        board[y][x].SetType(temp);
    }
    else if(key == 'a') {
        if(x > 0)
            --x;
        else {}
        char temp = board[y][x].GetType();
        board[y][x].SetType('*');
        drawBoard(board);
        board[y][x].SetType(temp);
    }
    else if(key == 'd') {
        if(x < 2)
            ++x;
        else {}
        char temp = board[y][x].GetType();
        board[y][x].SetType('*');
        drawBoard(board);
        board[y][x].SetType(temp);
    }
    else if(key == 'q') {
        if (board[y][x].GetType() == ' ') {
            board[y][x].SetType(turn);
            drawBoard(board);
            if(!isWin(board)) {
                if(turn == 'X') //Переключаем ход
                    turn = 'O';
                else
                    turn = 'X';
            }
            else {}
        }
        else {
            char temp = board[y][x].GetType();
            board[y][x].SetType('*');
            drawBoard(board);
            board[y][x].SetType(temp);
        }
    }
    else {
        char temp = board[y][x].GetType();
        board[y][x].SetType('*');
        drawBoard(board);
        board[y][x].SetType(temp);
    }
}
