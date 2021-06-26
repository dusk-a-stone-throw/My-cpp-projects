#include <iostream>
#include <ctime>
#include "DrawGrid.h"
#include "Tile.h"
#include "SpawnTile.h"
void foo(int a, int b, int c) {

}
int main() {
    srand(time(NULL));
    Tile grid[4][4];
    grid[0][0].SetValue("  2 ");
    grid[0][1].SetValue("  2 ");
    grid[0][2].SetValue("  2 ");
    grid[0][3].SetValue("  2 ");
    grid[1][0].SetValue("  2 ");
    grid[1][1].SetValue("  2 ");
    grid[1][2].SetValue("  2 ");
    grid[1][3].SetValue("  2 ");
    // grid[3][0].SetValue("  2 ");
    // grid[3][1].SetValue("  2 ");
    // grid[3][2].SetValue("  2 ");
    // grid[3][3].SetValue("  2 ");

    SpawnTile(grid);
    DrawGrid(grid);
}
