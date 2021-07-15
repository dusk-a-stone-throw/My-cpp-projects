#include <iostream>

#include "figure.h"
void drawBoard(Figure board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "—————————————" << std::endl;
        std::cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j].GetType() << " | ";
        }
        std::cout << std::endl;
    }
    std::cout << "—————————————" << std::endl;
}
