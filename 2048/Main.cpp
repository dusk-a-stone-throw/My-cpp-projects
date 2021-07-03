
// TODO: MAKE WIN AND LOSE LOGIC
#include "SpawnTile.h"
#include "DrawGrid.h"
#include "Tile.h"
#include "Move.h"
#include <cctype>
#include <ctime>
#include <functional>
#include <iostream>
bool isFull(Tile grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << "i: " << i << " j: " << j << std::endl;
            if(i - 1 >= 0) {
                std::cout << "i - 1 > 0" << std::endl;
                if(grid[i][j].GetValue() == grid[i - 1][j].GetValue()) {
                    return false;
                }
                else {
                }
            }
            if(i + 1 <= 3) {
                std::cout << "i + 1 <= 0" << std::endl;
                if(grid[i][j].GetValue() == grid[i + 1][j].GetValue()) {
                    return false;
                }
                else {
                }
            }
            else {
            }
            if(j - 1 >= 0) {
                std::cout << "j - 1 >= 0" << std::endl;
                if(grid[i][j].GetValue() == grid[i + 1][j].GetValue()) {
                    return false;
                }
                else {
                }
            }
            if(j + 1 <= 3) {
                std::cout << "j + 1 <= 0" << std::endl;
                if(grid[i][j].GetValue() == grid[i + 1][j].GetValue()) {
                    return false;
                }
                else {
                }
            }
            else {
                std::cout << "else" << std::endl;
                continue;
            }
        }
    }
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
    while(true) {
        // if(isFull(grid)) {
        //     std::cout << "GAME OVER!" << std::endl;
        //     break;
        // }
        // else if(isWin(grid)) {
        //     std::cout << "You win!" << std::endl;
        //     break;
        // }
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
