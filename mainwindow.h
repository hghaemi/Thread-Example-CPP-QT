#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "counter.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
counter *COUNTER;
private:
    Ui::MainWindow *ui;

public slots:
    void received(int i);

private slots:
    void on_startbtn_clicked();
    void on_stopbtn_clicked();
};
#endif // MAINWINDOW_H
