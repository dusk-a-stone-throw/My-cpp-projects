#include <string>
class Tile {
private:
    std::string value;
public:
    Tile();
    void        Enlarge();
    std::string GetValue();
    void        Clear();
    void        SetValue(std::string value);
};
