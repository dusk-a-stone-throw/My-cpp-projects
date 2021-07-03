#include <iostream>
#include <string>
#include "Tile.h"
void DrawGrid(Tile grid[4][4], int score) {
    std::cout << "Score: " << score << std::endl;
    std::cout << "##########################" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << "#";
        for(int j = 0; j < 4; j++) {
            if(grid[i][j].GetValue() == "    ") {
                std::cout << "|" << grid[i][j].GetValue() << "|";
            }
            else {
                std::string temp = std::to_string(std::stoi(grid[i][j].GetValue())); // remove spaces
                if(temp.size() == 1) { // Green bold
                    std::cout << "|"
                              << "\033[1;37;42m" << grid[i][j].GetValue() << "\033[0m"
                              << "|";
                }
                else if(temp.size() == 2) { // Yellow bold
                    std::cout << "|"
                              << "\033[1;37;43m" << grid[i][j].GetValue() << "\033[0m"
                              << "|";
                }
                else if(temp.size() == 3) { // Blue bold
                    std::cout << "|"
                              << "\033[1;37;44m" << grid[i][j].GetValue() << "\033[0m"
                              << "|";
                }
                else if(temp.size() == 4) { // Red bold
                    std::cout << "|"
                              << "\033[1;37;41m" << grid[i][j].GetValue() << "\033[0m"
                              << "|";
                }
            }
        }
        std::cout << "#" << std::endl;
    }
    std::cout << "##########################" << std::endl;
}
