#include <QtCore/QCoreApplication>

#include "list.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    listQt *listQt_ptr=new listQt;

    listQt_ptr->listData();

    return a.exec();
}
