#include "Tile.h"
#include <iostream>
#include <stdlib.h>
#include <string>
Tile::Tile() {
    value = "    ";
}
void Tile::Clear() {
    value = "    ";
}
void Tile::Enlarge() {
    std::string temp = std::to_string(std::stoi(value) * 2); // remove spaces and multiplicate by 2
    if(temp.size() == 1) {
        value = "  " + std::to_string(std::stoi(value) * 2) + " ";
    }
    else if(temp.size() == 2) {
        value = " " + std::to_string(std::stoi(value) * 2) + " ";
    }
    else if(temp.size() == 3) {
        value = std::to_string(std::stoi(value) * 2) + " ";
    }
    else {
        value = std::to_string(std::stoi(value) * 2);
    }
}
std::string Tile::GetValue() {
    return value;
}
void Tile::SetValue(std::string value) {
    this->value = value;
}
