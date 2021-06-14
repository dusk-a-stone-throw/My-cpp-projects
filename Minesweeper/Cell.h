#include <string>
class Cell {
private:
    std::string type;
public:
    Cell();
    void SetType(std::string type);
    std::string GetType();
};
