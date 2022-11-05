//
// Created by Laurent Giustignano on 05/11/2022.
//

#ifndef EXEMPLEQT_DEMO_H
#define EXEMPLEQT_DEMO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Demo; }
QT_END_NAMESPACE

class Demo : public QWidget
{
Q_OBJECT

public:
    explicit Demo(QWidget *parent = nullptr);
    ~Demo() override;

private:
    Ui::Demo *ui;
};

#endif //EXEMPLEQT_DEMO_H
