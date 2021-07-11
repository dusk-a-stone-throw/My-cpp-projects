// TODO: CONTINUE SEARCHING FOR BUGS
#include "SpawnTile.h"
#include "DrawGrid.h"
#include "Tile.h"
#include "Move.h"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <fstream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <filesystem>
bool IsFull(Tile grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(grid[i][j].GetValue() == "    ") {
                return false;
            }
            else {
                if(i - 1 >= 0) {
                    if(grid[i][j].GetValue() == grid[i - 1][j].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(i + 1 <= 3) {
                    if(grid[i][j].GetValue() == grid[i + 1][j].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(j - 1 >= 0) {
                    if(grid[i][j].GetValue() == grid[i][j - 1].GetValue()) {
                        return false;
                    }
                    else {
                    }
                }
                else {
                }
                if(j + 1 <= 3) {
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
    return true;
}
bool IsWin(Tile grid[4][4]) {
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
void SaveScore(int score) {
    std::ofstream fout;
    fout.exceptions(std::ifstream::badbit | std::ifstream::failbit);
    try {
        fout.open(".record.txt");
    }
    catch(const std::ifstream::failure &ex) {
        std::cout << "\033[1;31m Error while saving game score. \033[0m" << std::endl;
        std::cout << ex.what() << std::endl;
        ex.code();
    }
    fout << std::to_string(score);
    fout.close();
}
int GetRecord() {
    std::ifstream fin;
    int temp;
    fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
    try {
        fin.open(".record.txt");
        std::string record;
        std::getline(fin, record);
        temp = std::stoi(record);
    }
    catch(const std::ifstream::failure &ex) {
        std::cout << "\033[1;31m Error while opening record file. \033[0m" << std::endl;
        std::cout << ex.what() << std::endl;
        ex.code();
    }
    catch(const std::invalid_argument &ex) {
        std::cout << "\033[1;31m Record file is invalid. \033[0m" << std::endl;
        SaveScore(0); // Delete a fucking hacker's record. HAHAHA
    }
    fin.close();
    return temp;
}
int main() {
    srand(time(NULL));
    system("clear");
    std::ios::sync_with_stdio(false);
    while(true) {
        system("clear");
        Tile grid[4][4];
        char key;
        int score = 0;
        SpawnTile(grid);
        while(true) {
            if(!(std::filesystem::exists(".record.txt"))) {
                SaveScore(score);
            }
            if(GetRecord() < score) {
                SaveScore(score);
            }
            DrawGrid(grid, score, GetRecord());
            if(IsWin(grid)) {
                std::cout << "\033[1;32mYou win!\033[0m Enter 'c' to play again or enter something "
                             "else to EXIT: "; // Bold green text
                char choise;
                std::cin >> choise;
                if(char(tolower(choise) == 'c')) {
                    break;
                }
                else {
                    std::cout << std::endl << "You have scored: " << score << std::endl;
                    exit(0);
                }
            }
            if(IsFull(grid)) {
                std::cout << "\033[1;31mGAME OVER!\033[0m You have scored: " << score // Bold red text
                          << ". Enter 'c' to play again or enter something else to EXIT: ";
                char choise;
                std::cin >> choise;
                if(char(tolower(choise) == 'c')) {
                    break;
                }
                else {
                    exit(0);
                }
                break;
            }
            system("stty raw");
            key = getchar();
            system("stty cooked");
            system("clear");
            if(key == 'w' || key == 'a' || key == 's' || key == 'd') {
                if(Move(grid, key, score)) {
                    SpawnTile(grid);
                }
            }
            else if(key == 'q') {
                // system("clear");
                std::cout << "Are you really want to exit? y/n ";
                switch(char(tolower(std::cin.get()))) {
                    case 'y': {
                        exit(0);
                        break;
                    }
                    default: {
                        continue;
                    }
                }
            }
        }
    }
}
