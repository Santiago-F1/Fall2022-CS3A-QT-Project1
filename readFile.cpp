#include "readFile.h"
#include "teamDefinition.h"
#include <QDebug>
#include <QFile>

using namespace std;

void readFromFileIntoVector(vector<Team> &vector, const QString &fileName)
{
    //Getting all teams from input file into a vector
    QFile file(fileName);

    if(!file.exists())
    {
        qCritical() << "File does not exist";
    }
    if (!file.open(QIODevice::ReadOnly))
    {
        qCritical() << file.errorString();
    }

    QTextStream stream(&file);
    while(!stream.atEnd())
    {
        Team temp;
        QString line = stream.readLine();
        temp.setTeamName(line.toStdString());

        qInfo() << "Name: " << line;
        line = stream.readLine();

        qInfo() << "Stadium name: " << line << '\n\n';

        temp.setStadiumName(line.toStdString());
        line = stream.readLine();

        qInfo() << "Cap: " << line.toInt() << '\n';

        temp.setSeatingCapacity(line.toInt());
        line = stream.readLine();

        qInfo() << "Location: " << line << '\n\n';

        temp.setLocation(line.toStdString());
        line = stream.readLine();

        qInfo() << "Conference: " << line << '\n\n';

        temp.setConference(line.toStdString());
        line = stream.readLine();

        qInfo() << "Division: " << line << '\n\n';

        temp.setDivision(line.toStdString());
        line = stream.readLine();

        qInfo() << "Surface: " << line << '\n\n';

        temp.setSurfaceType(line.toStdString());
        line=stream.readLine();

        qInfo() << "Roof: " << line << '\n\n';

        temp.setRoofType(line.toStdString());
        line=stream.readLine();

        qInfo() << "Year: " << line.toInt() << '\n\n';

        temp.setYearOpened(line.toInt());
        stream.skipWhiteSpace();
        //add to vector
        vector.push_back(temp);
    }
};
