#include "Cell.h"
#include <string>
Cell::Cell() {
    type = " ";
}
void Cell::SetType(std::string type) {
    this->type = type;
}
std::string Cell::GetType() {
    return type;
}
