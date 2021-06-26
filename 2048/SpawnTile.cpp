#include <iostream>
#include "Tile.h"
void SpawnTile(Tile grid[4][4]) {
    bool filled = false;
    int i = 3;
    while(!filled) {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                std::cout << i << " " << j << std::endl;
                if(grid[i][j].GetValue() != "    ") {
                    std::cout << "grid != NULL" << std::endl;
                    continue;
                }
                else {
                    if(rand() % 2 + 0 == 1) {
                        grid[i][j].SetValue("  2 ");
                        std::cout << "sucess!!!" << std::endl;
                        std::cout << i << " " << j << std::endl;
                        filled = true;
                        break;
                    }
                    else {
                        std::cout << "failure" << std::endl;
                        continue;
                    }
                }
            }
        }
    }
}
