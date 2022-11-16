#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    QPixmap pix("C:/Users/alexp/Desktop/Git and QT/Fall2022-CS3A-QT-Project1/imgs/Left graphic.jpg");
    int w = ui->graphicsView->width();
    int h = ui->graphicsView->height();
    ui->graphicsView->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

