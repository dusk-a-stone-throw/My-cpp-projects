#include "Cell.h"
#include "DrawField.h"
#include <iostream>
using std::cout;
using std::endl;
int main() {
    Cell field[2][2];
    cout << field[0][0].GetType() << endl;
    return 0;
}
