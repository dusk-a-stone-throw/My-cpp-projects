#include "Cell.h"
#include <iostream>
void drawField(Cell field[][], int height, int width) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            std::cout << field[i][j].GetType();
        }
        std::cout << std::endl;
    }
}
