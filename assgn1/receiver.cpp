#include "receiver.h"

Receiver::Receiver(QObject *parent) :
    QObject(parent)
{

}

void Receiver::sltReceiver()
{
    static int counter;
    qDebug() << " Counter is "<<counter;
    counter++;
}
