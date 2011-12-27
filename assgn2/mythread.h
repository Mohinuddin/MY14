#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include "sender.h"

class MyThread : public QThread
{

public:
    MyThread();

private:
    Sender *obj_s;

protected:
    void run();
};

#endif // MYTHREAD_H
