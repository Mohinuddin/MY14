#ifndef QT_H
#define QT_H

#include <QtWebKit>

class qtClass : public QWebView
{
    Q_OBJECT
public:
    explicit qtClass(QWidget *parent = 0);
   // void m_display(int);
signals:
    void sigSuccess();
    void sigFailure();
public slots:
    QString m_hello(QString);
        QString m_hello();
private:
    int idata;
    int ia;
};

#endif // QT_H
