//
// Created by Laurent Giustignano on 05/11/2022.
//

#ifndef EXEMPLEQT_DEMO_H
#define EXEMPLEQT_DEMO_H

#include <QWidget>

class Demo : public QWidget
{
Q_OBJECT

public:
    explicit Demo(QWidget *parent = nullptr);
    ~Demo() override;
};

#endif //EXEMPLEQT_DEMO_H
