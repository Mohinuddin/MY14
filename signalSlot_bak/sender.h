#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
      explicit Sender(QObject * parent = 0);

      void timerEvent(QTimerEvent *event);
      void m_show();
signals:

void m_SigSetValue(int);

public slots:

private:
int m_i;

};

#endif // SENDER_H
