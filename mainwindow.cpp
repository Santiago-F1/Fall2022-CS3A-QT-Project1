#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
<<<<<<< HEAD
#include "help.h"
=======
#include "readFile.h"
#include <QTextEdit>

extern vector<Team> teamVector;
>>>>>>> mastertest

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


<<<<<<< HEAD
void MainWindow::on_pushButton_21_clicked()
{
    Help help;
    help.setModal(true);
    help.exec();
=======
void MainWindow::on_sortByTeamName_clicked()
{
    ui->textBrowser->clear();
    QString teamToString;
    for(Team T: teamVector)
    {
        string str;
        str += "Team name: " + T.getStadiumName() + ", ";
        str += "Seating Capacity: " + to_string(T.getSeatingCapacity())+ ", ";
        str += "Team location: " + T.getLocation() + ", ";
        str += "Conference: " + T.getConference() + ", ";
        str += "Division: " + T.getDivision() + ", ";
        str += "SurfaceType: " + T.getSurfaceType() + ", ";
        str += "Roof type: " + T.getRoofType() + ", ";
        str += "Year opened: " + to_string(T.getYearOpened()) + "\n";
        teamToString = QString::fromStdString(str);
        ui->textBrowser->append(teamToString);
    }
}



void MainWindow::on_sortByStadiumName_clicked()
{
    ui->textBrowser->clear();
    QString teamToString;
    vector<Team> tempVector;

    for (unsigned long i = 0; i < tempVector.size(); i++)
    {
        Team *tempTeam = &teamVector[i];
        tempVector.push_back(*tempTeam);
        delete tempTeam;
    }
    for(int i = tempVector.size(); i > 0; i--)
    {
        string str;
        str += "Team name: " + tempVector[i].getName() + ", ";
        str += "Stadium Name: " + tempVector[i].getStadiumName() + ", ";
        str += "Seating Capacity: " + to_string(tempVector[i].getSeatingCapacity())+ ", ";
        str += "Team location: " + tempVector[i].getLocation() + ", ";
        str += "Conference: " + tempVector[i].getConference() + ", ";
        str += "Division: " + tempVector[i].getDivision() + ", ";
        str += "SurfaceType: " + tempVector[i].getSurfaceType() + ", ";
        str += "Roof type: " + tempVector[i].getRoofType() + ", ";
        str += "Year opened: " + to_string(tempVector[i].getYearOpened()) + "\n";
        teamToString = QString::fromStdString(str);
        ui->textBrowser->append(teamToString);
    }
}




void MainWindow::on_pushButton_15_clicked()
{
    ui->textBrowser->clear();
    int totalCap = 0;
    for(Team T:teamVector)
    {
        if (T.getConference() == "National Football Conferece 2570")
        {
            totalCap += T.getSeatingCapacity();
        }
    }
    string text = "Total Capacity: ";
    text.append(to_string(totalCap));
    QString cap = QString::fromStdString(text);
    ui->textBrowser->append(cap);
>>>>>>> mastertest
}

