#include "Tile.h"
#include <string>
Tile::Tile() {
    value = "    ";
}
void Tile::Clear() {
    value = "    ";
}
void Tile::Enlarge() {

}
std::string Tile::GetValue() {
    return value;
}
void Tile::SetValue(std::string value) {
    this->value = value;
}
