#include <QtCore/QCoreApplication>
#include "mythread.h"

#include <QThread>

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);

   MyThread *souThread=new MyThread;

   souThread->start();
   Sender w;
   w.setTimer();

   return a.exec();
}
