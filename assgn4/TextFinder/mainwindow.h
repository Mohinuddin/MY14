#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void m_load();
//    void m_userid();
//    void m_passwd();

private slots:

    void on_loadbtn_clicked();

    void on_pushButton_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
