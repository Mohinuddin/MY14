#include "mythread.h"

#include <QDebug>

MyThread::MyThread()

{



}
void MyThread::run(){

    obj_s = new Sender(this);

    qDebug()<<"Entry point";


}
