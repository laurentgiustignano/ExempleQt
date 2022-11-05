//
// Created by Laurent Giustignano on 05/11/2022.
//

#include "Demo.h"

Demo::Demo(QWidget *parent) : QWidget(parent) {
    monBouton = new QPushButton("Mon bouton");
    maGrille = new QGridLayout();

    maGrille->addWidget(monBouton);
    setLayout(maGrille);
}

Demo::~Demo() = default;


