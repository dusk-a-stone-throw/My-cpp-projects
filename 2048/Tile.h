#include <string>
#ifndef TILE_H
#define TILE_H
class Tile {
   private:
    std::string value;

   public:
    Tile();
    void Enlarge();
    std::string GetValue();
    void Clear();
    void SetValue(std::string value);
};
#endif