#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
class Notepad : public QWidget {
    Q_OBJECT
private slots:
    void print();
private:
    QLabel *lbl;
    QPushButton *button;
    QHBoxLayout *hbox;
public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();
};
class Click : public QWidget {
public:
    Click(QWidget *parent = 0);
};
#endif // MAINWINDOW_H
