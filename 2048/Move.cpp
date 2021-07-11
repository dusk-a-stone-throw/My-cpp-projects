#include "DrawGrid.h"
#include "Tile.h"
#include <string>
#include <iostream>
bool Move(Tile grid[4][4], char key, int &score) {
    bool wereTheTitesMoved = false;
    switch(key) {
        case 'w': {
            for(int i = 1; i < 4; i++) { // don't need to check 0 X because that does not need to be moved
                for(int j = 0; j < 4; j++) {
                    int freeCells       = 0;
                    int distanceToCheck = 1;
                    do {
                        if(i - distanceToCheck >= 0 &&
                           (grid[i - distanceToCheck][j].GetValue() == "    " ||
                            grid[i - distanceToCheck][j].GetValue() ==
                                grid[i][j].GetValue()) &&
                           grid[i][j].GetValue() != "    ") {
                            freeCells++;
                            distanceToCheck++;
                        }
                        else {
                            break;
                        }
                    } while(true);
                    if(freeCells > 0) {
                        wereTheTitesMoved = true;
                        if(grid[i][j].GetValue() == grid[i - freeCells][j].GetValue()) {
                            score += std::stoi(grid[i - freeCells][j].GetValue()) * 2;
                            grid[i - freeCells][j].Enlarge();
                        }
                        else {
                            grid[i - freeCells][j].SetValue(grid[i][j].GetValue());
                        }
                        grid[i][j].Clear();
                    }
                    else {
                    }
                }
            }
            break;
        }
        case 's': {
            for(int i = 3; i >= 0; i--) { // don't need to check 3 X because that does not need to be moved
                for(int j = 3; j >= 0; j--) {
                    int freeCells       = 0;
                    int distanceToCheck = 1;
                    do {
                        if(i + distanceToCheck <= 3 &&
                           (grid[i + distanceToCheck][j].GetValue() == "    " ||
                            grid[i + distanceToCheck][j].GetValue() ==
                                grid[i][j].GetValue()) &&
                           grid[i][j].GetValue() != "    ") {
                            freeCells++;
                            distanceToCheck++;
                        }
                        else {
                            break;
                        }
                    } while(true);
                    if(freeCells > 0) {
                        wereTheTitesMoved = true;
                        if(grid[i][j].GetValue() == grid[i + freeCells][j].GetValue()) {
                            score += std::stoi(grid[i + freeCells][j].GetValue()) * 2;
                            grid[i + freeCells][j].Enlarge();
                        }
                        else {
                            grid[i + freeCells][j].SetValue(grid[i][j].GetValue());
                        }
                        grid[i][j].Clear();
                    }
                    else {
                    }
                }
            }
            break;
        }
        case 'a': {
            for(int i = 0; i < 4; i++) {
                for(int j = 1; j < 4; j++) {
                    int freeCells       = 0;
                    int distanceToCheck = 1;
                    do {
                        if(j - distanceToCheck >= 0 &&
                           (grid[i][j - distanceToCheck].GetValue() == "    " ||
                            grid[i][j - distanceToCheck].GetValue() ==
                                grid[i][j].GetValue()) &&
                           grid[i][j].GetValue() != "    ") {
                            freeCells++;
                            distanceToCheck++;
                        }
                        else {
                            break;
                        }
                    } while(true);
                    if(freeCells > 0) {
                        wereTheTitesMoved = true;
                        if(grid[i][j].GetValue() == grid[i][j - freeCells].GetValue()) {
                            score += std::stoi(grid[i][j - freeCells].GetValue()) * 2;
                            grid[i][j - freeCells].Enlarge();
                        }
                        else {
                            grid[i][j - freeCells].SetValue(grid[i][j].GetValue());
                        }
                        grid[i][j].Clear();
                    }
                    else {
                    }
                }
            }
            break;
        }
        case 'd': {
            for(int i = 3; i >= 0; i--) {
                for(int j = 2; j >= 0; j--) {
                    int freeCells       = 0;
                    int distanceToCheck = 1;
                    do {
                        if(j + distanceToCheck <= 3 &&
                           (grid[i][j + distanceToCheck].GetValue() == "    " ||
                            grid[i][j + distanceToCheck].GetValue() ==
                                grid[i][j].GetValue()) &&
                           grid[i][j].GetValue() != "    ") {
                            freeCells++;
                            distanceToCheck++;
                        }
                        else {
                            break;
                        }
                    } while(true);
                    if(freeCells > 0) {
                        wereTheTitesMoved = true;
                        if(grid[i][j].GetValue() == grid[i][j + freeCells].GetValue()) {
                            score += std::stoi(grid[i][j + freeCells].GetValue()) * 2;
                            grid[i][j + freeCells].Enlarge();
                        }
                        else {
                            grid[i][j + freeCells].SetValue(grid[i][j].GetValue());
                        }
                        grid[i][j].Clear();
                    }
                    else {
                    }
                }
            }
            break;
        }
        default: {
        }
    }
    return wereTheTitesMoved;
}
