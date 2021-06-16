#include <iostream>
#include "Tile.h"
#include "DrawGrid.h" // For test, i should remove it and use DrawGrid.h
int main() {
    Tile grid[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            grid[i][j].SetValue("2048");
        }
    }
    DrawGrid(grid);
}
