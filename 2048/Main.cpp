#include <iostream>
#include "Tile.h"
#include "DrawGrid.cpp" // For test, i should remove it and use DrawGrid.h
int main() {
    Tile grid[4][4];
    DrawGrid(grid);
}
