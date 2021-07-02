#include <iostream>
#include "Tile.h"
void SpawnTile(Tile grid[4][4]) {
    bool filled = false;
    while(!filled) {
        for(int i = 0; i < 4; i++) {
            if(filled) {
                break;
            }
            else {
                for(int j = 0; j < 4; j++) {
                    if(grid[i][j].GetValue() != "    ") {
                        continue;
                    }
                    else {
                        if(rand() % 100 + 0 == 1) {
                            grid[i][j].SetValue("  2 ");
                            filled = true;
                            break;
                        }
                        else {
                            continue;
                        }
                    }
                }
            }
        }
    }
}
