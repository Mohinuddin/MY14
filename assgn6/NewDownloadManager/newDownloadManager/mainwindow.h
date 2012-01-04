#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QUrl>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void dataprogress(qint64,qint64);
    void doDownload();

private:
    Ui::MainWindow *ui;
    QProgressBar *m_progressbar;
};

#endif // MAINWINDOW_H
