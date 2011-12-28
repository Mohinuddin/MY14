
#include <QtCore/QCoreApplication>

#include "sender.h"

#include "receiver.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender obj_S;

    Receiver obj_R;

    obj_S.m_show();

    QObject::connect(&obj_S,SIGNAL(m_SigSetValue(int)),&obj_R,SLOT(m_slotValueChanged(int)),Qt::DirectConnection);

    return a.exec();
}
