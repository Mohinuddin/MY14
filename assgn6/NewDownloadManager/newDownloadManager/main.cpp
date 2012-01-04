#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.resize(200,600);
//    w.doDownload();
    w.show();
    return a.exec();
}
