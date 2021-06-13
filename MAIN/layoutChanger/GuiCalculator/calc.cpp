#include "calc.h"
#include "ui_calc.h"
#include <iostream>
Calc::Calc(QWidget *parent) : QWidget(parent) {
    QString nums[] { "1", "2","3", "4", "5", "6", "7",\
                    "8", "9", "0", ",", "/", "*", "+", "-", "^", "="};
//    std::vector <QPushButton *> buttons {};
    QGridLayout *gridBox = new QGridLayout(this);

    QPushButton *buttons[17];
//    buttons[0] = new QPushButton("aa");
//    gridBox->addWidget(buttons[0]);
//    buttons[1] = new QPushButton("aa");
//    gridBox->addWidget(buttons[1]);

    for(int i = 0; i < 17; i++) {
        buttons[i] = new QPushButton(nums[i]);
        buttons[i]->setFixedSize(40, 40);
        gridBox->addWidget(buttons[i]);
    }
    this->setLayout(gridBox);
}


