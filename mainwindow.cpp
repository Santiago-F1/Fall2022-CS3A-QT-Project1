#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_22_clicked() // Kasim
{
  admin admin;
  //hide();
admin.setModal(true);
admin.exec();

}

