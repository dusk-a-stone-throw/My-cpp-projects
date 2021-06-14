#include "calc.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calc calc;
    calc.show();
    return a.exec();
}
