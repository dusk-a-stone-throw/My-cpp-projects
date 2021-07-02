#include <iostream>

#include "Tile.h"
void DrawGrid(Tile grid[4][4], int score) {
    std::cout << "Score: " << score << std::endl;
    std::cout << "##########################" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << "#";
        for(int j = 0; j < 4; j++) {
            std::cout << "|" << grid[i][j].GetValue() << "|";
        }
        std::cout << "#" << std::endl;
    }
    std::cout << "##########################" << std::endl;
}
