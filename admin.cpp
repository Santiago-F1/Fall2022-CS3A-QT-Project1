#include "admin.h"
#include "ui_admin.h"
#include<QFile>
#include<QTextStream>
#include"readFile.h"
#include <QDebug>
extern vector<Team> teamVector;

//QInfo

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
QString password;
password=ui->lineEdit_Admin->text();
if(password == "password"){
//QFile file("qrc://teams//teamFile");

    QString path = ":/newTeams/Expansion.txt";
    readFromFileIntoVector(teamVector,path);




}
else{
        ui->lineEdit_Admin->setText("wrong password");
}

}

