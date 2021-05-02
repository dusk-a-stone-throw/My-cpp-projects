#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
//    QLabel lbl("hello");
//    lbl.resize(100, 100);
//    lbl.show();
    Notepad notepad;
    notepad.resize(300, 200);
    notepad.setWindowTitle("hello");
    notepad.show();
    return app.exec();
}
