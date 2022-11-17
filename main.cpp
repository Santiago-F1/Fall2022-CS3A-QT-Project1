#include "mainwindow.h"
#include "readFile.h"

#include <QApplication>
#include <vector>
#include <QStandardPaths>

vector<Team> teamVector;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QString path = ":/teams/teamFile";
    readFromFileIntoVector(teamVector,path);
    return a.exec();
}
