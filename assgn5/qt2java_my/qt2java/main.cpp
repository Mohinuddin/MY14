#include <QtGui>
#include <qt.h>
#include <QWebView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qtClass w;
    //w.m_display(5);
    w.load(QUrl("file:///home/mohin/QT/javaScript.html"));
    w.show();
    return a.exec();
}
