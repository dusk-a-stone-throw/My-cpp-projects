#include "figure.h"
#include <iostream>
bool isWin(Figure board[3][3]) {
    if((board[0][0].GetType() == board[0][1].GetType() && board[0][0].GetType() == board[0][2].GetType() && board[0][0].GetType() != ' ')\
    || (board[1][0].GetType() == board[1][1].GetType() && board[1][0].GetType() == board[1][2].GetType() && board[1][0].GetType() != ' ') \
    // || (board[0][0].GetType() == board[1][0].GetType() && board[0][0].GetType() == board[2][0].GetType())
    ) {
        return true;
    }
    else
        return false;
}
