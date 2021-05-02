#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
Notepad::Notepad(QWidget *parent) : QWidget(parent) {
    lbl = new QLabel("hello", this);
    button = new QPushButton("click!", this);
    QHBoxLayout *hbox  = new QHBoxLayout(this);
    connect(button, SIGNAL(clicked()), this, SLOT(print()));
    button->setMinimumSize(50, 50);
    button->setMaximumSize(50, 50);
    hbox->setAlignment(Qt::AlignCenter);
    this->setLayout(hbox);
    hbox->setSpacing(1);
    hbox->addWidget(lbl);
    hbox->addWidget(button);
}
Notepad::~Notepad() {
    delete lbl;
    delete button;
}
void Notepad::print() {
    lbl->setText("hello");
    lbl->setText("clicked!");
}

