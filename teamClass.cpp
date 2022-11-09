#include "teamFile.h"

Team::Team(){};
Team::~Team(){};

string Team::getName()const
{
    return teamName;
};
    string Team::getStadiumName()const
    {
        return stadiumName;
    };
    int Team::getSeatingCapacity()const
    {
        return seatingCapacity;
    };
    string Team::getLocation()const
    {
        return location;
    };
    string Team::getConference()const
    {
        return conference;
    };
    string Team::getDivision()const
    {
        return division;
    };
    string Team::getSurfaceType()const
    {
        return surfaceType;
    };
    string Team::getRoofType()const
    {
        return roofType;
    };
    int Team::getYearOpened()const
    {
        return yearOpened;
    };

    void Team::setTeamName(string name)
    {
        this->teamName = name;
    };

    void Team::setStadiumName(string name)
    {
        this->stadiumName = name;
    };
    void Team::setSeatingCapacity(int cap)
    {
        this->seatingCapacity = cap;
    };
    void Team::setLocation(string location)
    {
        this->location = location;
    };
    void Team::setConference(string conference)
    {
        this->conference = conference;
    };
    void Team::setDivision(string division)
    {
        this->division = division;
    };
    void Team::setSurfaceType(string type)
    {
        this->surfaceType = type;
    };
    void Team::setRoofType(string type)
    {
        this->roofType = type;
    };
    void Team::setYearOpened(int year)
    {
        this->yearOpened = year;
    };
