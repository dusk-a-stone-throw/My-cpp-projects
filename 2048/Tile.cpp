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
    if (value.size() == 1) {
        value = "  " + std::to_string(std::stoi(value) * 2) + " ";
    }
    else if (value.size() == 2) {
        value = " " + std::to_string(std::stoi(value) * 2) + " ";
    }
    else if (value.size() == 3) {
        value = " " + std::to_string(std::stoi(value) * 2);
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
