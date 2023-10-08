#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    COUNTER = new counter(this);
    connect(COUNTER,SIGNAL(send(int)),this,(SLOT(received(int))));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::received(int i)
{
    ui->label->setNum(i);
}


void MainWindow::on_startbtn_clicked()
{
    COUNTER->startflag=true;
    COUNTER->start();
}

void MainWindow::on_stopbtn_clicked()
{
    COUNTER->startflag=false;
}
