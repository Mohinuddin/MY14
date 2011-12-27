#include "receiver.h"


#include <QDebug>


Receiver::Receiver(QThread *parent) :
    QThread(parent)
{
    moveToThread(this);
}

void Receiver::sltReceiver()
{

   static int counter;
   qDebug() << " Counter value is "<<counter;
        qDebug() << "Receiver ThreadID =" << QThread::currentThreadId();
   counter++;

}
