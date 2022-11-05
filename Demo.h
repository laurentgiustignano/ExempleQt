//
// Created by Laurent Giustignano on 05/11/2022.
//

#ifndef EXEMPLEQT_DEMO_H
#define EXEMPLEQT_DEMO_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

class Demo : public QWidget
{
Q_OBJECT
public:
    explicit Demo(QWidget *parent = nullptr);
    ~Demo() override;

private:
    QPushButton *monBouton;
    QGridLayout *maGrille;
    short compteur;

private slots:
    void buttonClicked();
};

#endif //EXEMPLEQT_DEMO_H
