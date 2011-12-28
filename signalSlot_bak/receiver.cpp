#include "receiver.h"
#include <QDebug>

Receiver::Receiver()
{
}

void Receiver::m_slotValueChanged(int icount)
{

    qDebug()<<"Received value:"<<icount;
}
