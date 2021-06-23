#include <iostream>

#include "DrawGrid.h"
#include "Tile.h"
int main() {
    Tile grid[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            grid[i][j].SetValue("2048");
        }
    }
    DrawGrid(grid);
}
