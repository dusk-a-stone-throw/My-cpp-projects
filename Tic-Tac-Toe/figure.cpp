#include "figure.h"
Figure::Figure(char type) {
    this->type = type;
}
void Figure::SetType(char type) {
    this->type = type;
}
Figure::Figure() {
    type = ' ';
}
