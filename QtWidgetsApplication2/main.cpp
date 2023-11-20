#include "qtwidgetsapplication2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication2 w;
    w.setWindowTitle("nice");
    w.show();
    return a.exec();
}
