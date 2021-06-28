#include "DrawGrid.h"
#include "SpawnTile.h"
#include "Tile.h"
#include <ctime>
#include <iostream>
int main() {
    srand(time(NULL));
    Tile grid[4][4];
    SpawnTile(grid);
    DrawGrid(grid);
}

