#include "sender.h"
#include<QDebug>

Sender::Sender(QObject *parent) :
    QObject(parent)
{
    obj_r = new Receiver;

    obj_r->start();

    startTimer(200);
}




void Sender::setTimer()
{

    connect(this,SIGNAL(sigSender()),obj_r,SLOT(sltReceiver()),Qt::QueuedConnection);

}

void Sender::timerEvent(QTimerEvent *)
{
       emit sigSender();
       qDebug() << " Sender ID "<<QThread::currentThreadId();

}
