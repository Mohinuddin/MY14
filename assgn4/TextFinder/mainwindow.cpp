#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QEvent>
#include <QMap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGeometry(0,0,1000,800);
//    ui->textEdit->setEnabled(TRUE);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::m_load(){

    //QWidget *centralWidget;

       //QWebView *webView = new QWebView(this);
      ui->webView1->setGeometry(0,300,1000,800);
      ui->webView1->load(QUrl("http://www.google.com"));

//    ui->webView1->backgroundRole();

}


void MainWindow::on_loadbtn_clicked()
{   
    //QWebView *view = new QWebView(this);



    ui->AddressBox->maxLength();
//    QWebView *webView2 = new QWebView(this);
    ui->webView1->load(QUrl(ui->AddressBox->text()));
//    webView2->page(),ui->webView1->page());

}

void MainWindow::on_pushButton_clicked()
{
    ui->webView1->close();
//    ui->webView1->load(QUrl("http://www.google.com"));
}


