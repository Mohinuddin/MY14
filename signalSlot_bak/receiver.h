#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>

class Receiver : public QObject
{
    Q_OBJECT
public:
    Receiver();

signals:
//    void valueChanged(int newValue);

public slots:
   void m_slotValueChanged(int);

};

#endif // RECEIVER_H
