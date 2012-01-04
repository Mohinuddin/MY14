#include "newdownloadmanager.h"

newDownloadManager::newDownloadManager(QObject *parent) :
    QObject(parent)
{
    manager = new QNetworkAccessManager;
}


void newDownloadManager::startDownload(QUrl &url)
{
    qDebug()<<"In startDownload Function & the URL is : "<< url;
    request = new QNetworkRequest(url);

    m_reply = manager->get(*request);

//    connect(m_reply, SIGNAL(finished()),this,SLOT(downloadFinished()));
}

