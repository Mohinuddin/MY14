#include "sender.h"
#include "ui_sender.h"

Sender::Sender(QObject *parent) :
    QObject(parent)
{
    i = 0;
    obj_recv = new Receiver;
    startTimer(200);
}

Sender::~Sender()
{
    delete obj_recv;
}


void Sender::setTimer()
{

    connect(this,SIGNAL(sigSender()),obj_recv,SLOT(sltReceiver()),Qt::QueuedConnection);

}
void Sender::timerEvent(QTimerEvent *)
{
    i++;

    if(i == 3)
    {
        emit sigSender();
        i = 0;
    }


}


