#ifndef RECEIVER_H
#define RECEIVER_H

#include<QObject>
#include<QThread>


 class Receiver : public QThread
 {
        Q_OBJECT
    public:
           explicit Receiver(QThread *parent = 0);

    private slots:

        void sltReceiver();
};

#endif // RECEIVER_H
