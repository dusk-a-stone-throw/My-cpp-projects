// TODO: MAKE QUIT FUNCTION
#include "SpawnTile.h"
#include "DrawGrid.h"
#include "Tile.h"
#include "Move.h"
#include <ctime>
#include <iostream>
bool isFull(Tile grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(grid[i][j].GetValue() == "    ") {
                return false;
            }
            else {
                if(i - 1 >= 0) {
                    // std::cout << "i - 1 >= 0" << std::endl;
                    if(grid[i][j].GetValue() == grid[i - 1][j].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(i + 1 <= 3) {
                    // std::cout << "i + 1 <= 3" << std::endl;
                    if(grid[i][j].GetValue() == grid[i + 1][j].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(j - 1 >= 0) {
                    // std::cout << "j - 1 >= 0"<< std::endl;
                    if(grid[i][j].GetValue() == grid[i][j - 1].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(j + 1 <= 3) {
                    // std::cout << "j + 1 <= 3" << std::endl;
                    if(grid[i][j].GetValue() == grid[i][j + 1].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                continue;
            }
        }
    }
    // }
    return true;
}
bool isWin(Tile grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(grid[i][j].GetValue() == "2048") {
                return true;
            }
            else {
                continue;
            }
        }
    }
    return false;
}
int main() {
    srand(time(NULL));
    Tile grid[4][4];
    char key;
    int score = 0;
    SpawnTile(grid);
    grid[0][0].SetValue("1024");
    grid[0][1].SetValue("1488");
    grid[0][2].SetValue("1288");
    grid[0][3].SetValue("1388");
    grid[1][0].SetValue("1588");
    grid[1][1].SetValue("1888");
    grid[1][2].SetValue("1668");
    grid[1][3].SetValue("1418");
    grid[2][0].SetValue("1428");
    grid[2][1].SetValue("1438");
    grid[2][2].SetValue("1348");
    grid[2][3].SetValue("1218");
    while(true) {
        // else {
        //     bool leaveLoop = false;
        //     for(int i = 0; i < 4; i++) {
        //         if(leaveLoop) {
        //             break;
        //         }
        //         else {
        //             for(int j = 0; j < 4; j++) {
        //                 if(grid[i][j].GetValue() == "    ") {
        //                     leaveLoop = true;
        //                     break;
        //                 }
        //                 else {
        //                     continue;
        //                 }
        //             }
        //         }
        //     }
        DrawGrid(grid, score);
        if(isWin(grid)) {
            std::cout << "You win! Press any key to exit." << std::endl;
            std::cin.get();
            break;
        }
        else if(isFull(grid)) {
            std::cout << "GAME OVER!" << std::endl;
            break;
        }
        else {
        }
        system("stty raw");
        key = getchar();
        system("stty cooked");
        system("clear");
        if(key == 'w' || key == 'a' || key == 's' || key == 'd') {
            if(Move(grid, key, score)) {
                SpawnTile(grid);
            }
            else {
            }
        }
        else if(key == 'q') {
            char choise;
            std::cout << "Are you really want to exit? y/n ";
            std::cin >> choise;
            exit(0);
            switch(char(tolower(choise))) {
                case 'y': {
                    exit(0);
                    break;
                }
                case 'n': {
                    continue;
                }
            }
        }
    }
    // }
}
