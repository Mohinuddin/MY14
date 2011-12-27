#ifndef SENDER_H
#define SENDER_H

#include<QObject>

#include<QTimerEvent>
#include "receiver.h"


class Sender:public QObject
{
    Q_OBJECT

public:
    explicit Sender(QObject *parent = 0);


    void setTimer();
protected:
        void timerEvent(QTimerEvent *);

signals:
    void sigSender();

private:
    Receiver *obj_r;

};

#endif // SENDER_H
