#include "sender.h"
#include<QDebug>
#include <QTimer>
#include <QTimerEvent>
#include <QDebug>


Sender::Sender(QObject *parent) :
    QObject(parent)
{

    m_i=0;
    startTimer(200);

    qDebug()<<"Entry1";
}


void Sender::timerEvent(QTimerEvent *event)
{

    m_i++;

    static int icount=0;

    qDebug()<<"Entry2";

    if(m_i == 3)
    {
        qDebug() << "Timer ID:" << event->timerId();
        emit m_SigSetValue(++icount);
        m_i = 0;
    }
}

void Sender::m_show()
{
    qDebug()<<"int m_i="<<m_i;
}

