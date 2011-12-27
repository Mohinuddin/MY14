#include "list.h"

#include <QList>

#include <QDebug>

listQt::listQt()
{
}


void listQt::listData()
{
    QList<QString> QData;

    QData<<"one"<<"two"<<"three";

    qDebug()<<"QData="<<QData;


    QData.append("four");

    qDebug()<<"QData="<<QData<<"\n";

    QData.insert(2,"ten");

    QData.insert(0,"zero");

    qDebug()<<"QData="<<QData;
}
