#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "newdownloadmanager.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
connect(ui->downloadbutton,SIGNAL(clicked()),this,SLOT(doDownload()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doDownload()
{
    static int y = 100;
    QUrl url = ui->lineEdit->text();
    qDebug()<<"in doDownload";
    newDownloadManager *ptr_downloadManager = new newDownloadManager();
    m_progressbar = new QProgressBar(this);
    m_progressbar->setGeometry(100,y,380,20);
    m_progressbar->show();
    ptr_downloadManager->startDownload(url);
//    connect(ptr_downloadManager->m_reply,SIGNAL(readyRead()),ptr_downloadManager,SLOT(startDownload(QUrl&)));
    connect(ptr_downloadManager->m_reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(dataprogress(qint64,qint64)));
 //   connect(ptr_downloadManager->m_reply,SIGNAL(finished()),this,SLOT());
    //y = y + 50;
}
void MainWindow::dataprogress(qint64 bytesread, qint64 bytestotal)
{
    qDebug()<<"In dataprogress";
    m_progressbar->setMaximum(bytestotal);
    m_progressbar->setValue(bytesread);
    //int per = (bytestotal-bytesread)/bytestotal;
    //per= per*100;
    //qDebug()<<per;
}






