#ifndef TEAMDEFINITION_H
#define TEAMDEFINITION_H

using namespace std;

#include <vector>
#include <string>
#include <fstream>

class Team
{
    string teamName;
    string stadiumName;
    int seatingCapacity;
    string location;
    string conference;
    string division;
    string surfaceType;
    string roofType;
    int yearOpened;

public:

    Team();
    ~Team();

    string getName()const;
    string getStadiumName()const;
    int getSeatingCapacity()const;
    string getLocation()const;
    string getConference()const;
    string getDivision()const;
    string getSurfaceType()const;
    string getRoofType()const;
    int getYearOpened()const;
    Team readOnceFromFile()const;

    void setTeamName(string name);
    void setStadiumName(string name);
    void setSeatingCapacity(int cap);
    void setLocation(string location);
    void setConference(string conference);
    void setDivision(string division);
    void setSurfaceType(string type);
    void setRoofType(string type);
    void setYearOpened(int year);

    bool equals(const Team other);

};

#endif // TEAMDEFINITION_H
