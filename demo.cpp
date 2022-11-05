//
// Created by Laurent Giustignano on 05/11/2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Demo.h" resolved

#include "demo.h"
#include "ui_Demo.h"

Demo::Demo(QWidget *parent) :
        QWidget(parent), ui(new Ui::Demo) {
    ui->setupUi(this);
}

Demo::~Demo() {
    delete ui;
}
