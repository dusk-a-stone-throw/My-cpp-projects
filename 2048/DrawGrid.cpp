#include <iostream>
#include <string>
#include "Tile.h"
void DrawGrid(Tile grid[4][4], int score, int record) {
    std::cout << "Score: " << score << " Record: " << record << std::endl;
    std::cout << "##########################" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << "#";
        for(int j = 0; j < 4; j++) {
            if(grid[i][j].GetValue() == "    ") {
                std::cout << "|" << grid[i][j].GetValue() << "|";
            }
            else {
                int temp = std::stoi(grid[i][j].GetValue());
                std::cout << "|";
                switch(temp) {
                    case 2: {
                        std::cout << "\033[01;38;05;232;48;05;192m"; // Very pale yellow bg
                        break;
                    }
                   case 4: {
                        std::cout << "\033[01;38;05;232;48;05;185m"; // Pale yellow bg
                        break;
                    }
                    case 8: {
                        std::cout << "\033[01;38;05;232;48;05;190m"; // Bright yellow bg
                        break;
                    }
                    case 16: {
                        std::cout << "\033[01;38;05;232;48;05;150m"; // Very pale green bg
                        break;
                    }
                    case 32: {
                        std::cout << "\033[01;38;05;232;48;05;113m"; // Pale green bg
                        break;
                    }
                    case 64: {
                        std::cout << "\033[01;38;05;232;48;05;82m"; // Bright green bg
                        break;
                    }
                    case 128: {
                        std::cout << "\033[01;38;05;232;48;05;117m"; // Very pale cyan bg
                        break;
                    }
                    case 256: {
                        std::cout << "\033[01;38;05;232;48;05;74m"; // Pale cyan bg
                        break;
                    }
                    case 512: {
                        std::cout << "\033[01;38;05;232;48;05;39m"; // Bright cyan bg
                        break;
                    }
                    case 1024: {
                        std::cout << "\033[01;38;05;232;48;05;160m"; // Pale red bg
                        break;
                    }
                    case 2048: {
                        std::cout << "\033[01;38;05;232;48;05;196m"; // Bright red bg
                        break;
                    }
                }
                std::cout << grid[i][j].GetValue() << "\033[0m"
                          << "|";
            }
        }
        std::cout << "#" << std::endl;
    }
    std::cout << "##########################" << std::endl;
}
