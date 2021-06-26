#include "DrawGrid.h"
#include "SpawnTile.h"
#include "Tile.h"

#include <ctime>
#include <iostream>
int main() {
    srand(time(NULL));
    Tile grid[4][4];
    grid[0][0].SetValue("  2 ");
    grid[0][1].SetValue("  2 ");
    grid[0][2].SetValue("  2 ");
    grid[0][3].SetValue("  2 "); // dss
    grid[1][0].SetValue("  2 "); // ssssssss
    grid[1][1].SetValue("2");    // sss sqaa
    grid[1][2].SetValue("  2 ");
    grid[1][3].SetValue("  2 ");
    // grid[3][0].SetValue("  2 ");
    // grid[3][1].SetValue("  2 ");
    // grid[3][2].SetValue("  2 ");
    // grid[3][3].SetValue("  2 ");

    SpawnTile(grid);
    DrawGrid(grid);
}
