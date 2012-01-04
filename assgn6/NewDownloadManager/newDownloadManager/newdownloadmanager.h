#ifndef NEWDOWNLOADMANAGER_H
#define NEWDOWNLOADMANAGER_H

#include <QObject>
#include <QWidget>
#include <QCoreApplication>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <QDebug>

class newDownloadManager : public QObject
{
    Q_OBJECT

public:
    explicit newDownloadManager(QObject *parent = 0);

    void startRequest(QNetworkRequest *req);
    QNetworkReply *m_reply;
    //QString saveFileName(QUrl &url);

private:

    QNetworkRequest *request;
    QNetworkAccessManager *manager;

signals:

public slots:
    void startDownload(QUrl &url);
};

#endif // NEWDOWNLOADMANAGER_H
