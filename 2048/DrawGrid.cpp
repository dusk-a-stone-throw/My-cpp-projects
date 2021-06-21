#include "Tile.h"
#include <iostream>
void DrawGrid(Tile grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        std::cout << "———————— ————————— ————————— —————————" << std::endl;
        for(int j = 0; j < 4; j++) {
            std::cout << "| " << grid[i][j].GetValue() << " |";
        }
        std::cout << std::endl;
        // std::cout << "———————— ————————— ————————— —————————" << std::endl;
    }
}
