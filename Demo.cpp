//
// Created by Laurent Giustignano on 05/11/2022.
//

#include "Demo.h"

Demo::Demo(QWidget *parent) : QWidget(parent) {
    monBouton = new QPushButton("Mon bouton");
    maGrille = new QGridLayout();
    compteur = 0;

    connect(monBouton, SIGNAL(clicked()), this, SLOT(buttonClicked()));

    maGrille->addWidget(monBouton);
    setLayout(maGrille);
}
Demo::~Demo() = default;

void Demo::buttonClicked() {
    if (compteur++ % 2) {
        monBouton->setText("J'ai déjà cliqué");
    }
    else {
        monBouton->setText("J'ai re-cliqué");
    }
}
