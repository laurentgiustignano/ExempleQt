#include <QApplication>
#include "demo.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Demo maWidget;
    maWidget.show();

    return QApplication::exec();
}
