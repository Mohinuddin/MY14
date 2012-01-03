#include "qt.h"

qtClass::qtClass(QWidget *parent) :
    QWebView(parent)
{
    QWebFrame *frame = this->page()->mainFrame();
    frame->addToJavaScriptWindowObject("qTobject", this);
}

//void qtClass::m_display(int ia)
//{
//    idata = ia;
//}

QString qtClass::m_hello(QString)
{
    //return data;
    return QString("hello mohin");
    emit sigSuccess();
    emit sigFailure();
    //return data;
}
QString qtClass::m_hello()
{
    //return data;
    return QString("Display without any argument");
    emit sigSuccess();
    emit sigFailure();
    //return data;
}
